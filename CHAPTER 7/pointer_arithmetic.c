#include <stdio.h>

int main (){
   // int a = 5;  //POINTER ARITHMETIC USING INTEGER POINTER
   char a = 'A';

    //int *ptr = &a; 
    char *ptr = &a; //POINTER ARITHMETIC USING CHARACTER POINTER
    printf("the address of a is %u\n", &a);
    printf("the address of a is %u\n", ptr);
    ptr++;
    printf("the value of ptr is %u\n", ptr);
}