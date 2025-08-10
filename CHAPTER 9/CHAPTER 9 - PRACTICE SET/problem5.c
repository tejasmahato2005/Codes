#include <stdio.h>

typedef struct c
{
    int real;
    int imaginary;
} complex;

complex display(complex c){
    printf("the value of complex number is %d + %di \n", c.real, c.imaginary);
}
int main(){
    complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter real part \n");
        scanf("%d", &carr[i].real);
        printf("enter imaginary part \n");
        scanf("%d", &carr[i].imaginary);
        display(carr[i]);

    }   
        
    
    
       
    
    return 0;
}