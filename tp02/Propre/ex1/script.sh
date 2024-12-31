#!/bin/bash

if [ -f "./multMatrice.c" ]; then
    gcc -O2 multMatrice.c -o multMatrice.out
    gcc -O2 -funroll-loops multMatrice.c -o multMatriceOption.out
else
    echo "Erreur : Le fichier 'matriceMult.c' n'existe pas."
    exit 1
fi

if [ -f "deroulage.c" ]; then
    gcc -O2 deroulage.c -o deroulage.out
else
    echo "Erreur : Le fichier 'deroulage.c' n'existe pas."
    exit 1
fi




if [ -f "multMatrice.out" ] && [ -f "deroulage.out" ] && [ -f "multMatriceOption.out" ]; then
    echo "time de matriceMult:" >&2
    time ./multMatrice.out
    echo "time de deroulage:" >&2
    time ./deroulage.out
    echo "time de matriceMultOption:" >&2
    time ./multMatriceOption.out
else
    echo "Erreur : probleme lors de la compilation des fichiers."
    exit 1
fi