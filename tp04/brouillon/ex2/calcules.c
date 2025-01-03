#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define N 1000000000
// modifiez la valeur de N selon vos besoins
float x,y,z,t;

void setValues(){
    x=1.0;
    y=2.5;
    z=3.14;
    t=5.25;
}

int calcules(){
    int i;
    for (i=0; i< N; i++){
        x=x+y;
        y=x+t;
        z=x+z;
        x=t+y;
        t=y+x;
    }
    return t;
}

int main(int argc, char* argv[]){

    int val = getpid();
    printf("%d\n",val);
    setValues();
    int res=calcules();
    printf("%d",res);
    return 0;
}