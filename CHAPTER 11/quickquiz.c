#include <stdio.h>
#include <stdlib.h>

int main(){
    float n = 5;
    float* ptr;
    ptr = (float*) malloc(n *sizeof(float));
    ptr[0]=3.43;
    ptr[1]=6.45;
    ptr[2]=4.435;
    ptr[3]=3.45;
    ptr[4]=8.74;

    printf("%f\n", ptr[0]);
    printf("%f\n", ptr[1]);
    printf("%f\n", ptr[2]);
    printf("%f\n", ptr[3]);
    printf("%f\n", ptr[4]);
    return 0;
}