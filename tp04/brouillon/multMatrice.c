#include <stdio.h>
#include <unistd.h>
#define N 2000
#define M 2000
#define P 2000

float A[N][M] , B[N][P] , C[P][M];


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
    int n;
    int val = getpid();
    printf("pid:%d\n",val);
    scanf("%d", &n);
    printf("n:%d\n",n);
    mult();
    printC();


}