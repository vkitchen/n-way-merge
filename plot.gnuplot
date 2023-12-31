set datafile separator ','
set key autotitle columnhead
set ylabel 'Time (s)'
set xlabel 'n'

set style line 100 lt 1 lc rgb 'grey' lw 0.5
set grid ls 100

plot for [i=2:*] 'plot.dat' using 1:i with lines
