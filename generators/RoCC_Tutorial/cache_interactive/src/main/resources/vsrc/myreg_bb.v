module myreg_bb (
    input           clock,
    input			enable,
    input           rqvalid,
    input			wren,
    input [63:0]    wrdata,
    output          rdvalid,
    output [63:0]   rddata
);

    reg [63:0] mem;
//    reg [1:0]r_rdvalid = 2'b00;
    reg r_rdvalid;

	reg renable = 1'b0;

    always @(posedge clock) begin
        if (wren) mem <= wrdata;
        renable		<= !renable? enable: renable;
//        r_rdvalid   <= (r_rdvalid == 2'b00)? {1'b0, rqvalid && renable}:
//        			   (r_rdvalid == 2'b01)? 2'b10: 2'b10;
        r_rdvalid   <= rqvalid && renable;
    end

    assign rdvalid  = r_rdvalid;
    assign rddata   = mem;

endmodule
