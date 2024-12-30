#include <stdio.h>
#define N 1000000


float A[N] , B[N] , C[N];


void add(){
    for(int i=0;i<N;i++){
        C[i] = A[i] + B[i];
    }
}

void printC(){
    printf("val random:%f\n",C[42]);
}


int main(){
    printf ("hehe\n");
    add();
    printC();

}
