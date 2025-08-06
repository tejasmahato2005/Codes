#include <stdio.h>

int main (){
    int age = 15;

    if(age>5){
        printf("your age is greater than 10\n");
        printf("we are inside if");
    }
    if (age%5==0){
        printf("we are inside another if \n");
        printf("your age is divisible by 50\n");
    }
}