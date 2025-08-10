#include <stdio.h>

typedef struct c
{
    int real;
    int imaginary;
} complex;


int main(){
    complex c = {1,2};
    printf("the value of complex number is %d + %di", c.real, c.imaginary);
    return 0;
}