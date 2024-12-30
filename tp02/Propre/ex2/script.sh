#!/bin/bash

if [ -f "./multMatrice.c" ]; then
    gcc -O2 multMatrice.c -o multMatrice.out
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

if [ -f "deroulagefusion.c" ]; then
    gcc -O2 deroulagefusion.c -o deroulagefusion.out
else
    echo "Erreur : Le fichier 'deroulagefusion.c' n'existe pas."
    exit 1
fi



if [ -f "multMatrice.out" ] && [ -f "deroulage.out" ] && [ -f "deroulagefusion.out" ]; then
    echo "time de matriceMult:" >&2
    time ./multMatrice.out
    echo ""
    echo "time de deroulage:" >&2
    time ./deroulage.out
    echo ""
    echo "time de deroulagefusion:" >&2
    time ./deroulagefusion.out
else
    echo "Erreur : probleme lors de la compilation des fichiers."
    exit 1
fi