#include <stdio.h>
#define N 1000
#define M 1000
#define P 1000

float A[N][M] , B[N][P] , C[P][M];


void mult(){
    for (int i=0; i< N; i++){
        for (int j=0; j< M; j++){
            for (int k=0; k< P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

}

void printC(){
    printf("val random:%f\n",C[42][42]);
}


int main(){

    mult();
    printC();

}
