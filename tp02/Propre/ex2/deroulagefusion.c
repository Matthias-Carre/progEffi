#include <stdio.h>
#define N 2000
#define M 2000
#define P 2000

float A[N][M] , B[N][P] , C[P][M];
int i;

void mult(){
    for (i=0; i < N-3; i+=3){
        for (int j=0; j < M; j++){
            for (int k=0; k<P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];   
            }
            for (int k=0; k<P; k++){
                C[i+1][j] = C[i+1][j] + A[i+1][k] * B[k][j];
            }
            for (int k=0; k<P; k++){
                C[i+2][j] = C[i+2][j] + A[i+2][k] * B[k][j];
            }
        }
    }
    for(;i<N;i++){
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
