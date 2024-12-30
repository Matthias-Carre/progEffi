#include <stdio.h>
#include <stdlib.h>


void add(float *A, float *B, float *C, int N){
    for(int i=0;i<N;i++){
        C[i] = A[i] + B[i];
    }
}

void printC(float *C){
    printf("val random:%f\n",C[42]);
}


int main(){
    float* A;
    float* B;
    float* C;
    int N = 1000000;
    A = malloc(sizeof(float)*N);
    B = malloc(sizeof(float)*N);
    C = malloc(sizeof(float)*N);
    add(A,B,C,N);
    printC(C);
    free(A);
    free(B);
    free(C);


}
