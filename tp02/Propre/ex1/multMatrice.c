#include <stdio.h>
#define N 2500
#define M 2500
#define P 2500

float A[N][M] , B[N][P] , C[P][M];


void mult(){
    for (int i=0; i < N; i++){
        for (int j=0; j < M; j++){
            for (int k=0; k<P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

}

void printC(){
    printf("val random:%d ; %d\n",C[42][42],C[1234][1234]);
}


int main(int argc, char* argv[]){
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            A[i][j] = 3.14f;
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<P; j++){
            B[i][j] = 1.62f;
        }
    }
    mult();
    printC();

}
