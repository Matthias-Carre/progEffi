#!/bin/bash
if [ -f "./multMatrice.c" ]; then
    gcc -O2 -floop-interchange multMatrice.c -o multMatriceOption.out
else
    echo "Erreur : Le fichier 'multMatrice.c' n'existe pas."
    exit 1
fi

if [ -f "./permutation.c" ]; then
    gcc -O2 -D IJK permutation.c -o permuIJK.out
	gcc -O2 -D IKJ permutation.c -o permuIKJ.out
	gcc -O2 -D JIK permutation.c -o permuJIK.out
	gcc -O2 -D JKI permutation.c -o permuJKI.out
	gcc -O2 -D KIJ permutation.c -o permuKIJ.out
	gcc -O2 -D KJI permutation.c -o permuKJI.out

else
    echo "Erreur : Le fichier 'permutation.c' n'existe pas."
    exit 1
fi

if [ -f "multMatriceOption.out" ] && [ -f "permuIJK.out" ] && [ -f "permuIKJ.out" ] && [ -f "permuJIK.out" ] && [ -f "permuJKI.out" ] && [ -f "permuKIJ.out" ] && [ -f "permuKJI.out" ]; then
    echo "time de permutation IJK:" >&2
    time ./permuIJK.out
    echo "time de permutation IKJ:" >&2
    time ./permuIKJ.out
    echo "time de permutation JIK:" >&2
    time ./permuJIK.out
    echo "time de permutation JKI:" >&2
    time ./permuJKI.out
    echo "time de permutation KIJ:" >&2
    time ./permuKIJ.out
    echo "time de permutation KJI:" >&2
    time ./permuKJI.out
    echo "time de multMatriceOption:" >&2
    time ./multMatriceOption.out
else
    echo "Erreur : probleme lors de la compilation des fichiers."
    exit 1
fi
