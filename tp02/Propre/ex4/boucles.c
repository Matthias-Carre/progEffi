#include <stdio.h>
#define N 2500
#define M 2500
#define P 2500
#define block 700
float A[N][M] , B[N][P] , C[P][M];


void boucleijk(){
    for (int i0 = 0; i0 < N; i0 += block){
        for (int j0 = 0; j0 < M; j0 += block){
            for (int k0 = 0; k0 < P; k0 += block){
                for (int i = i0; i < i0 + block && i< N; i++){
                    for (int j = j0; j < j0+ block && j< M ; j++){
                        for (int k = k0; k < k0 + block && k< P ; k++){
                            C[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }
            }
        }

    }
}
void boucleikj(){
    for (int i0 = 0; i0 < N; i0 += block){
        for (int k0 = 0; k0 < P; k0 += block){
            for (int j0 = 0; j0 < M; j0 += block){
                for (int i = i0; i < i0 + block && i< N; i++){
                    for (int k = k0; k < k0 + block && k< P ; k++){
                        for (int j = j0; j < j0+ block && j< M ; j++){
                            C[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }
            }
        }

    }
}
void bouclejik(){
    for (int j0 = 0; j0 < M; j0 += block){
        for (int i0 = 0; i0 < N; i0 += block){
            for (int k0 = 0; k0 < P; k0 += block){
                for (int j = j0; j < j0+ block && j< M ; j++){
                    for (int i = i0; i < i0 + block && i< N; i++){
                        for (int k = k0; k < k0 + block && k< P ; k++){
                            C[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }
            }
        }

    }
}
void bouclejki(){
    for (int j0 = 0; j0 < M; j0 += block){
        for (int k0 = 0; k0 < P; k0 += block){
            for (int i0 = 0; i0 < N; i0 += block){
                for (int j = j0; j < j0+ block && j< M ; j++){
                    for (int k = k0; k < k0 + block && k< P ; k++){
                        for (int i = i0; i < i0 + block && i< N; i++){
                            C[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }
            }
        }

    }
}
void bouclekij(){
    for (int k0 = 0; k0 < P; k0 += block){
        for (int i0 = 0; i0 < N; i0 += block){
            for (int j0 = 0; j0 < M; j0 += block){
                for (int k = k0; k < k0 + block && k< P ; k++){
                    for (int i = i0; i < i0 + block && i< N; i++){
                        for (int j = j0; j < j0+ block && j< M ; j++){
                            C[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }
            }
        }

    }
}
void bouclekji(){
    for (int k0 = 0; k0 < P; k0 += block){
        for (int j0 = 0; j0 < M; j0 += block){
            for (int i0 = 0; i0 < N; i0 += block){
                for (int k = k0; k < k0 + block && k< P ; k++){
                    for (int j = j0; j < j0+ block && j< M ; j++){
                        for (int i = i0; i < i0 + block && i< N; i++){
                            C[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }
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
            A[i][j] = 3.14;
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<P; j++){
            B[i][j] = 1.62;
        }
    }
    boucleijk();
    printC();
    #elif JIK
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            A[i][j] = 3.14;
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<P; j++){
            B[i][j] = 1.62;
        }
    }
    bouclejik();
    printC();
    #elif JKI
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            A[i][j] = 3.14;
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<P; j++){
            B[i][j] = 1.62;
        }
    }
    bouclejki();
    printC();
    #elif IKJ
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            A[i][j] = 3.14;
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<P; j++){
            B[i][j] = 1.62;
        }
    }
    boucleikj();
    printC();
    #elif KIJ
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            A[i][j] = 3.14;
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<P; j++){
            B[i][j] = 1.62;
        }
    }
    bouclekij();
    printC();
    #elif KJI
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            A[i][j] = 3.14;
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<P; j++){
            B[i][j] = 1.62;
        }
    }
    bouclekji();
    printC();
    #else


    #endif
}
