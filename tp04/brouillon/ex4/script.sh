#!/bin/bash

if [ -f "./appelsys.c" ]; then
    gcc -O0 appelsys.c -o appelsysgccO0.out
    gcc -O1 appelsys.c -o appelsysgccO1.out
    gcc -O2 appelsys.c -o appelsysgccO2.out
    gcc -O3 appelsys.c -o appelsysgccO3.out
    gcc -Os appelsys.c -o appelsysgccOs.out
    icx -O0 appelsys.c -o appelsysicxO0.out
    icx -O1 appelsys.c -o appelsysicxO1.out
    icx -O2 appelsys.c -o appelsysicxO2.out
    icx -O3 appelsys.c -o appelsysicxO3.out
    icx -Os appelsys.c -o appelsysicxOs.out
else
    echo "Erreur : appelsys.c n'existe pas."
    exit 1
fi
outputfile=("gccO0" "gccO1" "gccO2" "gccO3" "gccOs" "icxO0" "icxO1" "icxO2" "icxO3" "icxOs")


rm -rf ./benchmark
mkdir -p benchmark

for file in ${outputfile[@]};do
    
    touch ./benchmark/benchmark-$file.txt
    for i in {0..10};do
        ./bench.sh ./appelsys$file.out > result.txt
        ENERGY=$(cat ./result.txt | grep "Total Energy" | awk '{print $4}')
        echo $ENERGY >> ./benchmark/benchmark-$file.txt
    done
done