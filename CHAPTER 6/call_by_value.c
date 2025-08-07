#include <stdio.h>


int sum(int,int);


int sum (int a, int b){
    a = 6; // sum function cannot change x using a bcoz copy of x is provided to sum in a
    return a+b;
}

int main (){
    int x = 1, y = 6;
        printf("the sum of 1 and 6 is %d\n", sum(x, y));
        printf("the value of x is %d\n", x);
}