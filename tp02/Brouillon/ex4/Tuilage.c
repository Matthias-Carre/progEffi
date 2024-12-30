#include <stdio.h>
#define N 1000
#define M 1000
#define P 1000
#define bloc 3

float A[N][M] , B[N][P] , C[P][M];



int main(int argc, char* argv[]){

    for (int i0 = 0; i0 < N; i0 += bloc){
        for (int j0 = 0; j0 < M; j0 += bloc){
            for (int k0 = 0; k0 < P; k0 += bloc){
                for (int i = i0; i < min(i0 + bloc, N); i++){
                    for (int j = j0; j < min(j0 + bloc, M); j++){
                        for (int k = k0; k < min(k0 + bloc, P); k++){
                            C[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }
            }
        }
    }
}