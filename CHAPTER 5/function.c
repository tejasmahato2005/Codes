#include <stdio.h>

// function prototype
int sum(int,int);


// Function definition
int sum(int x, int y) {
            //printf(" the sum is %d\n", x+y);
            return x+y;
}
int main (){
    int a =1;
    int b=2;

   int c= sum(a,b);   // function call
   printf("%d\n", c);

    int a1 =12;
    int b1 =23;

    int c1 =sum(a1,b1); // function call
    printf("%d\n", c1);

    int a2 = 2;
    int b2 = 27;

    int c2 = sum(a2,b2); // function call
    printf("%d\n", c2);



}