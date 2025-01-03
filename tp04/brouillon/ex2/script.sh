#!/bin/bash

if [ -f "./calcules.c" ]; then
    gcc -O0 calcules.c -o calculesgccO0.out
    gcc -O1 calcules.c -o calculesgccO1.out
    gcc -O2 calcules.c -o calculesgccO2.out
    gcc -O3 calcules.c -o calculesgccO3.out
    gcc -Os calcules.c -o calculesgccOs.out
    icx -O0 calcules.c -o calculesicxO0.out
    icx -O1 calcules.c -o calculesicxO1.out
    icx -O2 calcules.c -o calculesicxO2.out
    icx -O3 calcules.c -o calculesicxO3.out
    icx -Os calcules.c -o calculesicxOs.out
else
    echo "Erreur : calcules.c n'existe pas."
    exit 1
fi
outputfile=("gccO0" "gccO1" "gccO2" "gccO3" "gccOs" "icxO0" "icxO1" "icxO2" "icxO3" "icxOs")


rm -rf ./benchmark
mkdir -p benchmark

for file in ${outputfile[@]};do
    
    touch ./benchmark/benchmark-$file.txt
    for i in {0..10};do
        ./bench.sh ./calcules$file.out > result.txt
        ENERGY=$(cat ./result.txt | grep "Total Energy" | awk '{print $4}')
        echo $ENERGY >> ./benchmark/benchmark-$file.txt
    done
done