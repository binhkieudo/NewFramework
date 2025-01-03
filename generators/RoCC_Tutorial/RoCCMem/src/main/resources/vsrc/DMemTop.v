module DMemTop (
    input           clock,
    input           reset,
    output          busy,
    // RoCC request
    input   [63:0]  req_rs1,
    input   [63:0]  req_rs2,
    input   [4:0]   req_rd,
    input   [6:0]   req_cmd,
    input   [6:0]   req_funct7,
    input           req_valid,
    output          req_ready,
    // DMEM request interface
    output           dmem_req_valid,
    input            dmem_req_ready,
    output [63:0]    dmem_req_addr,
    output [6:0]     dmem_req_tag,
    output [4:0]     dmem_req_cmd,
    output [2:0]     dmem_req_size,
    output [63:0]    dmem_req_wdata,
    output [7:0]     dmem_req_wmask,
    // DMEM response interface
    input            dmem_resp_valid,
    input  [6:0]     dmem_resp_tag,
    input  [63:0]    dmem_resp_rdata
);

    localparam  ROCC_LOAD = 5'd0,
                ROCC_STORE = 5'd1;

    reg [63:0] buffer [0:31];
    reg [31:0] buffer_vld;

    reg [63:0] waddr;       // destination address
    reg [63:0] req_addr;    // source address
    reg [63:0] offset;

    reg [6:0]  rdptr; // read pointer to buffer
    reg [6:0]  wrptr; // write pointer to buffer
    reg [6:0]  wbaddr; // write back address to buffer after process

    reg [63:0] rawdata; // raw data read from buffer

    // ========= Controller ===================================================
    localparam S_IDLE       = 0,
                S_READ      = 1, // load data from dmem
                S_WAITREAD  = 2, // wait until all data loaded
                S_GET       = 3, // get data from buffer
                S_PROCESS   = 4, // Process the data
                S_WRITE     = 5, // store data to dmem
                S_WAIT      = 6, // wait for delay from dmem
                S_DONE      = 7;

    reg [2:0] state, pstate, nstate;

    always @(posedge clock) begin
        if (reset) state <= S_IDLE;
        else state <= nstate;

        // previous state
        case(state)
            S_IDLE: pstate <= S_IDLE;
            S_READ: pstate <= (!dmem_req_ready)? S_READ: pstate;
            S_WRITE: pstate <= (!dmem_req_ready)? S_WRITE: pstate;  
            default: pstate <= pstate; 
        endcase
    end

    always @(*) begin
        nstate = S_IDLE;
        case (state)
            S_IDLE: nstate = req_valid? S_READ: S_IDLE;
            S_READ:
                if (rdptr[5]) nstate = S_WAITREAD;
                else nstate = (!dmem_req_ready)? S_WAIT: S_READ;
            S_WAITREAD: nstate = &buffer_vld? S_GET: S_WAITREAD;
            S_GET     : nstate = S_PROCESS;
            S_PROCESS: // process data in this step
                nstate = rdptr[5]? S_WRITE: S_PROCESS;
            S_WRITE:
                if (wrptr[5]) nstate = S_DONE;
                else nstate = (!dmem_req_ready)? S_WAIT: S_WRITE;
            S_WAIT: nstate = dmem_req_ready? pstate: S_WAIT;
            S_DONE: nstate = S_IDLE;
            default: nstate = S_IDLE;
        endcase
    end

    // ========= Buffer load/store ================================================
    always @(posedge clock) begin
        if (state == S_IDLE) begin
            wbaddr <= 7'd0;

            rdptr <= 7'd0;
            wrptr <= 7'd0;

            buffer_vld <= 32'd0;

            if (req_valid) begin
                req_addr <= req_rs1;
                waddr <= req_rs2;
                offset <= {57'd0, req_funct7};
            end
            
        end
        else begin
            // Read pointer
            if (state == S_READ)
                rdptr <= dmem_req_ready? rdptr + 1'b1: rdptr;
            else if (state == S_WAIT) 
                rdptr <= rdptr;
            else if (state == S_WAITREAD) 
                rdptr <= 7'd0;
            else if (state == S_GET || state == S_PROCESS)
                rdptr <= rdptr + 1'b1;

            // Write pointer
            if (state == S_WRITE)
                wrptr <= dmem_req_ready? wrptr + 1'b1: wrptr;
            else if (state == S_WAIT)
                wrptr <= wrptr;

            // Write back address
            if(state == S_GET || state == S_PROCESS)
              wbaddr <=  rdptr; 

            // Request address
            if (state == S_READ || state == S_WRITE)
                req_addr <= dmem_req_ready? req_addr + 64'd8: req_addr;
            else if (state == S_WAITREAD)
                req_addr <= waddr;

            // Raw data from buffer
            if (state == S_GET || state == S_PROCESS)
                rawdata <= buffer[rdptr[4:0]]  + offset;

            // Buffer and valid assignment    
            if ((state == S_READ || pstate == S_READ) && dmem_resp_valid) begin 
                buffer_vld[dmem_resp_tag[4:0]] <= 1'b1;
                buffer[dmem_resp_tag[4:0]] <= dmem_resp_rdata; // Change input data
            end
            else if ((state == S_WRITE || pstate == S_WRITE) && dmem_req_ready) begin
                buffer_vld[wrptr[4:0]] <= 1'b0;
            end
            else if (state == S_PROCESS) begin
                buffer[wbaddr[4:0]] <= rawdata;
            end
        end
    end


    // ========= Output ======================================================
    // Setup for block operation
    assign busy         = !(state == S_IDLE || state == S_DONE);
    assign req_ready    = !busy;

    // DMEM request
    assign dmem_req_valid = (state == S_READ || state == S_WRITE) && dmem_req_ready;
    assign dmem_req_addr  = req_addr;
    assign dmem_req_tag   = (state == S_WRITE)? wrptr: rdptr;
    assign dmem_req_cmd   = (state == S_WRITE)? ROCC_STORE: ROCC_LOAD;
    assign dmem_req_size  = 3'b111;
    assign dmem_req_wdata = buffer[wrptr[4:0]];
    assign dmem_req_wmask = 8'hff; 

endmodule
