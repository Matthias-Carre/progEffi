#include <stdio.h>

#define N 1000000
#define s 9

float A[N] , B[N] , C[N];


void mult(){
    for(int i=0;i<N;i++){
        C[i] = A[i]* s;
    }
}

void printC(){
    printf("val random:%f\n",C[42]);
}


int main(){

    mult();
    printC();

}
