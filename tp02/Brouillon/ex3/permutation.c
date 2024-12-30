#include <stdio.h>
#define N 1000
#define M 1000
#define P 1000

float A[N][M] , B[N][P] , C[P][M];



void multIJK(){
    for (int i=0; i< N; i++){
        for (int j=0; j< M; j++){
            for (int k=0; k< P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
}

void multIKJ(){
    for (int i=0; i< N; i++){
        for (int k=0; k< P; k++){
            for (int j=0; j< M; j++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
}

void multKIJ(){
    for (int k=0; k< P; k++){
        for (int i=0; i< N; i++){
            for (int j=0; j< M; j++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
}

void multKJI(){
    for (int k=0; k< P; k++){
        for (int j=0; j< M; j++){
            for (int i=0; i< N; i++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
}

void multJIK(){
    for (int j=0; j< M; j++){
        for (int i=0; i< N; i++){
            for (int k=0; k< P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
}

void multJKI(){
    for (int j=0; j< M; j++){
        for (int k=0; k< P; k++){
            for (int i=0; i< N; i++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
}

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
    printf("val random:%d\n",C[42][42]);
}


int main(int argc, char* argv[]){
    #ifdef IJK
    for (int i=0; i< N; i++){
        for (int j=0; j< M; j++){
            for (int k=0; k< P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    #elif IKJ
    for (int i=0; i< N; i++){
        for (int k=0; k< P; k++){
            for (int j=0; j< M; j++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    #elif KIJ
    for (int k=0; k< P; k++){
        for (int i=0; i< N; i++){
            for (int j=0; j< M; j++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    #elif KJI
    for (int k=0; k< P; k++){
        for (int j=0; j< M; j++){
            for (int i=0; i< N; i++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    #elif JIK
    for (int j=0; j< M; j++){
        for (int i=0; i< N; i++){
            for (int k=0; k< P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    #elif JKI
    for (int j=0; j< M; j++){
        for (int k=0; k< P; k++){
            for (int i=0; i< N; i++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    #else
    for (int i=0; i< N; i++){
        for (int j=0; j< M; j++){
            for (int k=0; k< P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    #endif
}
