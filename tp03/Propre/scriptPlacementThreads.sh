#!/bin/bash

if [ -f "./matrixmatrixmultiply.c" ]; then

    gcc -O2 -fopenmp ./matrixmatrixmultiply.c -o ./matrix-gcc
    icx -O2 -fopenmp ./matrixmatrixmultiply.c -o ./matrix-icc

    touch resgccSetup1-2-3-4.txt
    touch resiccSetup1-2-3-4.txt
    touch resgccSetup1-5-9-11.txt
    touch resiccSetup1-5-9-11.txt
    echo "" > resgccSetup1-2-3-4.txt
    echo "" > resiccSetup1-2-3-4.txt
    echo "" > resgccSetup1-5-9-11.txt
    echo "" > resiccSetup1-5-9-11.txt
    export OMP_NUM_THREADS=4
    export GOMP_CPU_AFFINITY="0 1 2 3"

    for i in {1..50} ; 
    do 
    /usr/bin/time -f "%e" -o buffer ./matrix-gcc ; cat buffer >> resgccSetup1-2-3-4.txt;
    done
    export KMP_AFFINITY=compact
    for i in {1..50} ; 
    do 
    /usr/bin/time -f "%e" -o buffer ./matrix-icc ; cat buffer >> resiccSetup1-2-3-4.txt; 
    done

    export GOMP_CPU_AFFINITY="1 5 9 11"
    for i in {1..50} ;
    do 
    /usr/bin/time -f "%e" -o buffer ./matrix-gcc ; cat buffer >> resgccSetup1-5-9-11.txt;
    done
    export KMP_AFFINITY=scatter
    for i in {1..50} ;
    do 
    /usr/bin/time -f "%e" -o buffer ./matrix-icc ; cat buffer >> resiccSetup1-5-9-11.txt;
    done

else
    echo "Le fichier matrixmatrixmultiply.c n'existe pas"
    exit 1
fi