package chipyard

import org.chipsalliance.cde.config.{Config}
import freechips.rocketchip.subsystem._

import chipyard.example._
import freechips.rocketchip.devices.tilelink.PLICAttachParams

import freechips.rocketchip.devices.tilelink._
import chipyard.clocking.{ChipyardPRCIControlKey, ChipyardPRCIControlParams}
import freechips.rocketchip.devices.debug.{ExportDebug, DebugAttachParams}
import freechips.rocketchip.tile._
import freechips.rocketchip.rocket._
import freechips.rocketchip.diplomacy.SynchronousCrossing

// class WithFastICores(
//   n: Int,
//   overrideIdOffset: Option[Int] = None,
//   crossing: RocketCrossingParams = RocketCrossingParams()
// ) extends Config((site, here, up) => {
//   case XLen => 64
//   case TilesLocated(InSubsystem) => {
//     val prev = up(TilesLocated(InSubsystem), site)
//     val idOffset = overrideIdOffset.getOrElse(prev.size)
//     val corefull = RocketTileParams(
//       core = RocketCoreParams(
//         fpu = Some(FPUParams(
//           divSqrt = false
//         )),
//         mulDiv = Some(MulDivParams(
//           mulUnroll = 32,
//           mulEarlyOut = true,
//           divEarlyOut = true))
//       ),
//       btb = None,
//       dcache = Some(DCacheParams(
//         rowBits = site(SystemBusKey).beatBits,
//         nSets = 64,
//         nWays = 1,
//         nTLBSets = 1,
//         nTLBWays = 4,
//         nMSHRs = 0,
//         blockBytes = site(CacheBlockBytes))),
//       icache = Some(ICacheParams(
//         rowBits = site(SystemBusKey).beatBits,
//         nSets = 64,
//         nWays = 1,
//         nTLBSets = 1,
//         nTLBWays = 4,
//         blockBytes = site(CacheBlockBytes))))
//     val corehalf = RocketTileParams(
//       core = RocketCoreParams(
//         fpu = None,
//         mulDiv = Some(MulDivParams(
//           mulUnroll = 32,
//           mulEarlyOut = true,
//           divEarlyOut = true))
//       ),
//       btb = None,
//       dcache = Some(DCacheParams(
//         rowBits = site(SystemBusKey).beatBits,
//         nSets = 64,
//         nWays = 1,
//         nTLBSets = 1,
//         nTLBWays = 4,
//         nMSHRs = 0,
//         blockBytes = site(CacheBlockBytes))),
//       icache = Some(ICacheParams(
//         rowBits = site(SystemBusKey).beatBits,
//         nSets = 64,
//         nWays = 1,
//         nTLBSets = 1,
//         nTLBWays = 4,
//         blockBytes = site(CacheBlockBytes))))
//     List.tabulate(n)(i => 
//       if (i == 0)
//         RocketTileAttachParams( corefull.copy(hartId = i + idOffset), crossing)
//       else
//         RocketTileAttachParams( corehalf.copy(hartId = i + idOffset), crossing)
//     ) ++ prev
//   }
// })

// class WithTinyCore extends Config((site, here, up) => {
//   case XLen => 32
//   case TilesLocated(InSubsystem) => {
//     val tiny = RocketTileParams(
//       core = RocketCoreParams(
//         useVM = false,
//         fpu = None,
//         mulDiv = Some(MulDivParams(mulUnroll = 8))),
//       btb = None,
//       dcache = Some(DCacheParams(
//         rowBits = site(SystemBusKey).beatBits,
//         nSets = 256, // 16Kb scratchpad
//         nWays = 1,
//         nTLBSets = 1,
//         nTLBWays = 4,
//         nMSHRs = 0,
//         blockBytes = site(CacheBlockBytes),
//         scratch = Some(0x80000000L))),
//       icache = Some(ICacheParams(
//         rowBits = site(SystemBusKey).beatBits,
//         nSets = 64,
//         nWays = 1,
//         nTLBSets = 1,
//         nTLBWays = 4,
//         blockBytes = site(CacheBlockBytes)))
//     )
//     List(RocketTileAttachParams(
//       tiny,
//       RocketCrossingParams(
//         crossingType = SynchronousCrossing(),
//         master = TileMasterPortParams())
//     ))
//   }
// })

// // random, lru, plru
// class WithL1DCacheReplacementPolicy(policy: String) extends Config((site, here, up) => {
//   case TilesLocated(InSubsystem) => up(TilesLocated(InSubsystem), site) map {
//     case tp: RocketTileAttachParams => tp.copy(tileParams = tp.tileParams.copy(
//       dcache = tp.tileParams.dcache.map(_.copy(
//         replacementPolicy = policy,
//         nWays = 2
//       ))))
//     case t => t
//   }
// })


class WithDCacheScratchpad extends Config((site, here, up) => {
  case TilesLocated(InSubsystem) => up(TilesLocated(InSubsystem), site) map {
    case tp: RocketTileAttachParams => tp.copy(tileParams = tp.tileParams.copy(
      dcache = tp.tileParams.dcache.map(_.copy(nSets = 64, nWays = 1, scratch = Some(0x40000000 + tp.tileParams.hartId * 0x1000)))
    )) // 4-KB/each
  }
})

// class WithoutCBUS extends Config((site, here, up) => {
//   case PLICAttachKey => up(PLICAttachKey, site).copy(slaveWhere = SBUS)
//   case CLINTAttachKey => up(CLINTAttachKey, site).copy(slaveWhere = SBUS)
//   case ChipyardPRCIControlKey => up(ChipyardPRCIControlKey, site).copy(slaveWhere = SBUS)
//   case ExportDebug => up(ExportDebug, site).copy(slaveWhere = SBUS)
//   case ControlBusKey => None
// })


class SingleRocketConfig extends Config(
  new WithDCacheScratchpad ++
  new testchipip.WithMbusScratchpad(base = BigInt(0x70000000L), size = BigInt(8 << 10)) ++
  new freechips.rocketchip.subsystem.WithNBigCores(1) ++         // single rocket-core
  new chipyard.config.AbstractConfig)

