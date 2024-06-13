package chipyard.fpga.arty100t

import chipyard.iobinders.OverrideLazyIOBinder
import chisel3.experimental.IO
import freechips.rocketchip.diplomacy.{InModuleBody, Resource, ResourceAddress, ResourceBinding}
import freechips.rocketchip.subsystem.BaseSubsystem
import sifive.blocks.devices.spi.{HasPeripherySPI, HasPeripherySPIModuleImp, MMCDevice}

class WithSPIIOPassthrough extends OverrideLazyIOBinder({
  (system: HasPeripherySPI) => {
    // attach resource to 1st SPI
    ResourceBinding {
      Resource(new MMCDevice(system.tlSpiNodes.head.device, 1), "reg").bind(ResourceAddress(0))
    }

    InModuleBody {
      system.asInstanceOf[BaseSubsystem].module match { case system: HasPeripherySPIModuleImp => {
        val io_spi_pins_temp = system.spi.zipWithIndex.map { case (dio, i) => IO(dio.cloneType).suggestName(s"sdio_$i") }
        (io_spi_pins_temp zip system.spi).map { case (io, sysio) =>
          io <> sysio
        }
        (io_spi_pins_temp, Nil)
      } }
    }
  }
})