#include <stdio.h>

int main (){
    int i = 72;
    int* j = &i; // j is a pointer pointing to i (j is a integer pointer)
    printf("the address of i is %p\n", &i); // &i means address of i or the operator
    printf("the address of i is %p\n", j);


    printf("the value at address j is %d\n", *(&i));

}