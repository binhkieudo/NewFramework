# 
# Synthesis run script generated by Vivado
# 

set TIME_start [clock seconds] 
namespace eval ::optrace {
  variable script "/home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.runs/synth_1/VC707woDDRHarness.tcl"
  variable category "vivado_synth"
}

# Try to connect to running dispatch if we haven't done so already.
# This code assumes that the Tcl interpreter is not using threads,
# since the ::dispatch::connected variable isn't mutex protected.
if {![info exists ::dispatch::connected]} {
  namespace eval ::dispatch {
    variable connected false
    if {[llength [array get env XILINX_CD_CONNECT_ID]] > 0} {
      set result "true"
      if {[catch {
        if {[lsearch -exact [package names] DispatchTcl] < 0} {
          set result [load librdi_cd_clienttcl[info sharedlibextension]] 
        }
        if {$result eq "false"} {
          puts "WARNING: Could not load dispatch client library"
        }
        set connect_id [ ::dispatch::init_client -mode EXISTING_SERVER ]
        if { $connect_id eq "" } {
          puts "WARNING: Could not initialize dispatch client"
        } else {
          puts "INFO: Dispatch client connection id - $connect_id"
          set connected true
        }
      } catch_res]} {
        puts "WARNING: failed to connect to dispatch server - $catch_res"
      }
    }
  }
}
if {$::dispatch::connected} {
  # Remove the dummy proc if it exists.
  if { [expr {[llength [info procs ::OPTRACE]] > 0}] } {
    rename ::OPTRACE ""
  }
  proc ::OPTRACE { task action {tags {} } } {
    ::vitis_log::op_trace "$task" $action -tags $tags -script $::optrace::script -category $::optrace::category
  }
  # dispatch is generic. We specifically want to attach logging.
  ::vitis_log::connect_client
} else {
  # Add dummy proc if it doesn't exist.
  if { [expr {[llength [info procs ::OPTRACE]] == 0}] } {
    proc ::OPTRACE {{arg1 \"\" } {arg2 \"\"} {arg3 \"\" } {arg4 \"\"} {arg5 \"\" } {arg6 \"\"}} {
        # Do nothing
    }
  }
}

proc create_report { reportName command } {
  set status "."
  append status $reportName ".fail"
  if { [file exists $status] } {
    eval file delete [glob $status]
  }
  send_msg_id runtcl-4 info "Executing : $command"
  set retval [eval catch { $command } msg]
  if { $retval != 0 } {
    set fp [open $status w]
    close $fp
    send_msg_id runtcl-5 warning "$msg"
  }
}
OPTRACE "synth_1" START { ROLLUP_AUTO }
OPTRACE "Creating in-memory project" START { }
create_project -in_memory -part xc7vx485tffg1157-1

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -source 4 -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.cache/wt [current_project]
set_property parent.project_path /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.xpr [current_project]
set_property XPM_LIBRARIES {XPM_CDC XPM_MEMORY} [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property ip_output_repo /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.cache/ip [current_project]
set_property ip_cache_permissions {read write} [current_project]
OPTRACE "Creating in-memory project" END { }
OPTRACE "Adding files" START { }
read_verilog -library xil_defaultlib -sv {
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ALU.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AMOALU.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AXI4IdIndexer.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AXI4UserYanker.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncQueue.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncQueueSink.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncQueueSink_2.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncQueueSink_3.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncQueueSink_4.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncQueueSource.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncQueueSource_2.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncQueueSource_3.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncQueueSource_4.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncResetReg.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncResetRegVec_w13_i0.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncResetRegVec_w1_i0.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncResetRegVec_w1_i1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncResetRegVec_w2_i0.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncResetSynchronizerPrimitiveShiftReg_d3_i0.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncResetSynchronizerPrimitiveShiftReg_d3_i0_VC707woDDRHarness_UNIQUIFIED.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncResetSynchronizerShiftReg_w1_d3_i0.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncResetSynchronizerShiftReg_w1_d3_i0_2.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncResetSynchronizerShiftReg_w1_d3_i0_VC707woDDRHarness_UNIQUIFIED.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncResetSynchronizerShiftReg_w4_d3_i0.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AsyncValidSync.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/BreakpointUnit.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/BundleBridgeNexus_15.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/CLINT.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/CSRFile.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/CaptureChain.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/CaptureUpdateChain.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/CaptureUpdateChain_1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/CaptureUpdateChain_2.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ChipTop.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ClockCrossingReg_w15.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ClockCrossingReg_w32.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ClockCrossingReg_w43.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ClockCrossingReg_w55.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ClockGroup.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ClockGroupAggregator_6.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ClockGroupCombiner.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ClockGroupParameterModifier.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ClockGroupParameterModifier_1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ClockGroupResetSynchronizer.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ClockSinkDomain.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ClockSinkDomain_1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ClockSinkDomain_2.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ClockSinkDomain_3.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ClockSinkDomain_4.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/CoherenceManagerWrapper.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/DCache.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/DCacheDataArray.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/DMIToTL.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/DebugTransportModuleJTAG.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/DigitalTop.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ErrorDeviceWrapper.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/FixedClockBroadcast.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/FixedClockBroadcast_1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/FixedClockBroadcast_3.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/FixedClockBroadcast_4.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Frontend.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/GenericDeserializer.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/GenericSerializer.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/HellaCacheArbiter.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/HellaPeekingArbiter.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/IBuf.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ICache.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/IntSyncAsyncCrossingSink.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/IntSyncCrossingSource_1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/IntSyncCrossingSource_4.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/IntSyncCrossingSource_5.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/IntSyncSyncCrossingSink.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/IntSyncSyncCrossingSink_1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/IntXbar.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/IntXbar_1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/JtagBypassChain.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/JtagStateMachine.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/JtagTapController.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/LevelGateway.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/MemoryBus.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/MulDiv.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/NonSyncResetSynchronizerPrimitiveShiftReg_d3.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/OptimizationBarrier.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/PLICFanIn.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/PMPChecker.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/PTW.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/PeripheryBus.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/PeripheryBus_1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/PlusArgTimeout.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ProbePicker.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue_1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue_10.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue_11.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue_13.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue_15.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue_4.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue_47.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue_48.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue_49.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue_5.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue_53.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue_54.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue_55.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue_57.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue_58.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue_8.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Queue_9.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/RVCExpander.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Repeater.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Repeater_1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Repeater_3.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Repeater_4.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Repeater_5.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Repeater_6.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Repeater_7.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Repeater_8.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ResetCatchAndSync_d3.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ResetCatchAndSync_d3_VC707woDDRHarness_UNIQUIFIED.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ResetSynchronizerShiftReg_w1_d3_i0.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ResetWrangler.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/Rocket.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/RocketTile.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/SPIFIFO.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/SPIMedia.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/SPIPhysical.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ScratchpadSlavePort.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ShiftQueue.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/SynchronizerShiftReg_w1_d3.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/SystemBus.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLAsyncCrossingSink.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLAsyncCrossingSource.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLAtomicAutomata.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLAtomicAutomata_1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLB_1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLBroadcast.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLBroadcastTracker.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLBroadcastTracker_1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLBroadcastTracker_2.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLBroadcastTracker_3.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLBuffer.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLBuffer_12.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLBuffer_13.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLBuffer_2.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLBuffer_4.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLBuffer_5.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLBuffer_7.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLBusBypass.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLBusBypassBar.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLDebugModule.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLDebugModuleInner.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLDebugModuleInnerAsync.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLDebugModuleOuter.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLDebugModuleOuterAsync.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLError.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLError_1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLFIFOFixer.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLFIFOFixer_1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLFIFOFixer_2.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLFIFOFixer_3.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLFIFOFixer_4.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLFragmenter.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLFragmenter_1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLFragmenter_3.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLFragmenter_4.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLFragmenter_5.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLFragmenter_6.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLFragmenter_7.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLFragmenter_9.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLInterconnectCoupler_10.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLInterconnectCoupler_12.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLInterconnectCoupler_13.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLInterconnectCoupler_14.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLInterconnectCoupler_16.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLInterconnectCoupler_4.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLInterconnectCoupler_5.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLInterconnectCoupler_7.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLInterconnectCoupler_9.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLPLIC.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLROM.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLSPI.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLSerdesser.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLToAXI4.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLUART.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLXbar.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLXbar_10.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLXbar_11.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLXbar_2.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLXbar_5.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TLXbar_8.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TileClockGater.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TilePRCIDomain.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/TileResetSetter.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/UARTRx.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/UARTTx.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/data_arrays_0.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/data_arrays_0_0.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ram_combMem.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ram_combMem_0.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ram_combMem_1.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ram_combMem_10.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ram_combMem_12.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ram_combMem_13.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ram_combMem_14.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ram_combMem_15.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ram_combMem_2.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ram_combMem_3.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ram_combMem_4.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ram_combMem_5.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ram_combMem_6.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ram_combMem_7.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ram_combMem_8.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/ram_combMem_9.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/rf_combMem.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/tag_array_0.sv
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/VC707woDDRHarness.sv
}
read_verilog -library xil_defaultlib {
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/AnalogToUInt_1.v
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/IOCell.v
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/PowerOnResetFPGAOnly.v
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/UIntToAnalog_1.v
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/framework.fpga.vc707.VC707woDDRHarness.SmallRocketAXITestVC707Config.top.mems.v
  /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/imports/gen-collateral/plusarg_reader.v
}
read_ip -quiet /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/ip/axi_bram_ctrl_0/axi_bram_ctrl_0.xci
set_property used_in_implementation false [get_files -all /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.gen/sources_1/ip/axi_bram_ctrl_0/axi_bram_ctrl_0_ooc.xdc]

read_ip -quiet /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/sources_1/ip/harnessSysPLL/harnessSysPLL.xci
set_property used_in_implementation false [get_files -all /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.gen/sources_1/ip/harnessSysPLL/harnessSysPLL_board.xdc]
set_property used_in_implementation false [get_files -all /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.gen/sources_1/ip/harnessSysPLL/harnessSysPLL.xdc]
set_property used_in_implementation false [get_files -all /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.gen/sources_1/ip/harnessSysPLL/harnessSysPLL_late.xdc]
set_property used_in_implementation false [get_files -all /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.gen/sources_1/ip/harnessSysPLL/harnessSysPLL_ooc.xdc]

OPTRACE "Adding files" END { }
# Mark all dcp files as not used in implementation to prevent them from being
# stitched into the results of this synthesis run. Any black boxes in the
# design are intentionally left as such for best results. Dcp files will be
# stitched into the design at a later time, either when this synthesis run is
# opened, or when it is stitched into a dependent implementation run.
foreach dcp [get_files -quiet -all -filter file_type=="Design\ Checkpoint"] {
  set_property used_in_implementation false $dcp
}
read_xdc /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/constrs_1/new/constr.xdc
set_property used_in_implementation false [get_files /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/constrs_1/new/constr.xdc]

set_param ips.enableIPCacheLiteLoad 1

read_checkpoint -auto_incremental -incremental /home/binhkieudo/Workspace/RISC-V/NewFramework/framework/usb/project/project.srcs/utils_1/imports/synth_1/VC707woDDRHarness.dcp
close [open __synthesis_is_running__ w]

OPTRACE "synth_design" START { }
synth_design -top VC707woDDRHarness -part xc7vx485tffg1157-1
OPTRACE "synth_design" END { }
if { [get_msg_config -count -severity {CRITICAL WARNING}] > 0 } {
 send_msg_id runtcl-6 info "Synthesis results are not added to the cache due to CRITICAL_WARNING"
}


OPTRACE "write_checkpoint" START { CHECKPOINT }
# disable binary constraint mode for synth run checkpoints
set_param constraints.enableBinaryConstraints false
write_checkpoint -force -noxdef VC707woDDRHarness.dcp
OPTRACE "write_checkpoint" END { }
OPTRACE "synth reports" START { REPORT }
create_report "synth_1_synth_report_utilization_0" "report_utilization -file VC707woDDRHarness_utilization_synth.rpt -pb VC707woDDRHarness_utilization_synth.pb"
OPTRACE "synth reports" END { }
file delete __synthesis_is_running__
close [open __synthesis_is_complete__ w]
OPTRACE "synth_1" END { }