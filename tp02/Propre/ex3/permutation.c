#include <stdio.h>
#define N 2500
#define M 2500
#define P 2500

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
    printf("val random:%d ; %d\n",C[42][42],C[1234][1234]);
}

int main(int argc, char* argv[]){

    
    #ifdef IJK
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
    for (int i=0; i< N; i++){
        for (int j=0; j< M; j++){
            for (int k=0; k< P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    printC();
    #elif IKJ
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
    for (int i=0; i< N; i++){
        for (int k=0; k< P; k++){
            for (int j=0; j< M; j++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    printC();
    #elif KIJ
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
    for (int k=0; k< P; k++){
        for (int i=0; i< N; i++){
            for (int j=0; j< M; j++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    printC();
    #elif KJI
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
    for (int k=0; k< P; k++){
        for (int j=0; j< M; j++){
            for (int i=0; i< N; i++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    printC();
    #elif JIK
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
    for (int j=0; j< M; j++){
        for (int i=0; i< N; i++){
            for (int k=0; k< P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    printC();
    #elif JKI
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
    for (int j=0; j< M; j++){
        for (int k=0; k< P; k++){
            for (int i=0; i< N; i++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    printC();
    #else
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
    for (int i=0; i< N; i++){
        for (int j=0; j< M; j++){
            for (int k=0; k< P; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    printC();
    #endif
}
