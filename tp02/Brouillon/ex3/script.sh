#!/bin/bash

flags=("IJK" "IKJ" "KIJ" "KJI" "JIK" "JKI")

for flag in "${flags[@]}";
do
    echo "Timing $flag permutation:"
    time ./premu$flag.out 
done
