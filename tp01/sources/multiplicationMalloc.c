#include <stdio.h>
#include <stdlib.h>

void mult(float *A, float *C, int N){
    for(int i=0;i<N;i++){
        C[i] = A[i]* 9;
    }
}

void printC(float *C){
    printf("val random:%f\n",C[42]);
}


int main(){
    float* A;

    float* C;
    int N = 1000000;
    A = malloc(sizeof(float)*N);
    C = malloc(sizeof(float)*N);
    mult(A,C,N);
    printC(C);
    free(A);
    free(C);

}
