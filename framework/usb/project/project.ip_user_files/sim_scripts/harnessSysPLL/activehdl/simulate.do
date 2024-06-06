onbreak {quit -force}
onerror {quit -force}

asim +access +r +m+harnessSysPLL  -L xpm -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.harnessSysPLL xil_defaultlib.glbl

set NumericStdNoWarnings 1
set StdArithNoWarnings 1

do {wave.do}

view wave
view structure

do {harnessSysPLL.udo}

run

endsim

quit -force
