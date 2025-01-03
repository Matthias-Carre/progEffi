#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define Taille 10000000
#define pas 8

int tab[Taille];
float lecture_depuis_fichier(FILE *fichier) {
    float valeur;
    fscanf(fichier, "%f", &valeur);
    return valeur;
}

void ecrire_fichier(FILE *fichier, float valeur) {
    fprintf(fichier, "%f\n", valeur);
}

int main() {
    int n;
    int val = getpid();
    printf("%d\n",val);

    float x = 0;
    int i;
    FILE *fichier_lecture = fopen("input.txt", "r");
    FILE *fichier_ecriture = fopen("output.txt", "w");

    for (i = 0; i < Taille; i++){
        tab[i] = lecture_depuis_fichier(fichier_lecture);
    }
    for (i = 0; i < Taille-pas; i += pas) {
        x += tab[i];
        ecrire_fichier(fichier_ecriture, x);
    }

    fclose(fichier_lecture);
    fclose(fichier_ecriture);
    return 0;
}
