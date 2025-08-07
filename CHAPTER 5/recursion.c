#include <stdio.h>

    int factorial(int);
    // Factorial(5) = 1 x 2 x 3 x 4 x 5
    // Factorial (n) = 1 x 2 x 3 x  . . . x n-1 x n
    // Factorial (n-1)  = 1 x 2 x 3 x . . . x n-1

   int factorial(int n){
    if (n == 1 || n == 0) // base condition
    {
        return 1;
    }
    // Factorial(n) = Factorail(n-1) x n
    return factorial(n-1) * n;

   }



    
    int main (){
        int a=3;    
        printf("the factorial of %d is %d", a, factorial(a));
    }
