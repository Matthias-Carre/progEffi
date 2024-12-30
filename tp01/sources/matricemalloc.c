#include <stdio.h>
#include <stdlib.h>

void mult(float** A,float** B,float** C){
    for (int i=0; i< 1000; i++){
        for (int j=0; j< 1000; j++){
            for (int k = 0; k < 1000; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

}



int main(){
    float** A;
    float** B;
    float** C;
    A = malloc(sizeof(float*)*1000);
    for(int i=0;i<1000;i++){
        A[i] = malloc(sizeof(float)*1000);
    }

    B = malloc(sizeof(float*)*1000);
    for(int i=0;i<1000;i++){
        B[i] = malloc(sizeof(float)*1000);
    }

    C = malloc(sizeof(float*)*1000);
    for(int i=0;i<1000;i++){
        C[i] = malloc(sizeof(float)*1000);
    }

    mult( A , B , C );


    for(int i=0;i<1000;i++){
        free(A[i]);
    }
    free(A);
    for(int i=0;i<1000;i++){
        free(B[i]);
    }
    free(B);
    for(int i=0;i<1000;i++){
        free(C[i]);
    }
    free(C);
}
