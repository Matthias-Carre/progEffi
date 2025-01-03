#!/bin/bash

if [ -f "./matrixmatrixmultiply.c" ]; then

    gcc -O2 -fopenmp ./matrixmatrixmultiply.c -o ./matrix-gcc
    icx -O2 -fopenmp ./matrixmatrixmultiply.c -o ./matrix-icc


    export OMP_NUM_THREADS=1
    for i in {1..50} ; 
    do /usr/bin/time -f "%e" -o buffer ./matrix-gcc ; cat buffer >> resgccNbThreads1.txt;
    /usr/bin/time -f "%e" -o buffer ./matrix-icc ; cat buffer >> resiccNbThreads1.txt; 
    done
    export OMP_NUM_THREADS=4
    for i in {1..50} ;
    do /usr/bin/time -f "%e" -o buffer ./matrix-gcc ; cat buffer >> resgccNbThreads4.txt;
    /usr/bin/time -f "%e" -o buffer ./matrix-icc ; cat buffer >> resiccNbThreads4.txt; 
    done
    export OMP_NUM_THREADS=8
    for i in {1..50} ;
    do /usr/bin/time -f "%e" -o buffer ./matrix-gcc ; cat buffer >> resgccNbThreads8.txt;
    /usr/bin/time -f "%e" -o buffer ./matrix-icc ; cat buffer >> resiccNbThreads8.txt; 
    done
    export OMP_NUM_THREADS=12
    for i in {1..50} ;
    do /usr/bin/time -f "%e" -o buffer ./matrix-gcc ; cat buffer >> resgccNbThreads12.txt;
    /usr/bin/time -f "%e" -o buffer ./matrix-icc ; cat buffer >> resiccNbThreads12.txt; 
    done


else
    echo "Erreur : Le fichier 'matrixmatrixmultiply.c' n'existe pas."
    exit 1
fi