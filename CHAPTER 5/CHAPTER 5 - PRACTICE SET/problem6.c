#include <stdio.h>


int sum_natural(int);

int sum_natural(int n){
    if (n==1)
    {
        return 1;
    }
    
    //sum_natural(n) = 1 + 2 + 3 + . . . n-1 + n;
    //sum_natural(n) = sum(n-1) + n;
    return sum_natural(n-1) + n;

}  
int main (){
    printf("the sum of first 5 natural numbers is %d", sum_natural(5));

}