#include <stdio.h>

int main (){
    char i = 'A';
    char* j = &i; // j is a pointer pointing to i ( j is a character pointer)
    
    float k = 5.323;
    float* k1 = &k;
    
    printf("the address of i is %p\n", &i);
    printf(" the address of i is %p\n", j);
    printf("the address of i is %p\n", &k);

    printf("the value at address j is %d\n", *(&i));
}