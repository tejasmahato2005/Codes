#include <stdio.h>

int main (){
    int year;
    printf("enter year: \n");
    scanf("%d", &year);

    if((year %4==0 && year%100!=0)  ||  year %400==0){ //divisible by 4 & 400 but not with 100
        printf("this is a leap year");
    }

    else{
        printf("this is not a leap year");
    }
}