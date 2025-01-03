#!/bin/bash

if [ -f "./memorybound.c" ]; then
    gcc -O0 memorybound.c -o memboundgccO0.out
    gcc -O1 memorybound.c -o memboundgccO1.out
    gcc -O2 memorybound.c -o memboundgccO2.out
    gcc -O3 memorybound.c -o memboundgccO3.out
    gcc -Os memorybound.c -o memboundgccOs.out
    icx -O0 memorybound.c -o memboundicxO0.out
    icx -O1 memorybound.c -o memboundicxO1.out
    icx -O2 memorybound.c -o memboundicxO2.out
    icx -O3 memorybound.c -o memboundicxO3.out
    icx -Os memorybound.c -o memboundicxOs.out
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
        ./bench.sh ./membound$file.out > result.txt
        ENERGY=$(cat ./result.txt | grep "Total Energy" | awk '{print $4}')
        echo $ENERGY >> ./benchmark/benchmark-$file.txt
    done
done