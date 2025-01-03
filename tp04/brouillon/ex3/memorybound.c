#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define Taille 100000000
#define pas 8

int tab[Taille];

int main() {

    int n;
    int val = getpid();
    printf("%d\n",val);

    float x = 0;
    int i;
    for (i = 0; i < Taille; i++){
        tab[i] = rand();
    } 
    for (i = 0; i < Taille-pas ; i += pas) {
        x += tab[i];
    }
    printf("Resultat: %f\n", x);
    return 0;

}
