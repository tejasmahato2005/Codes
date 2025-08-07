#include <stdio.h>

int main (){
    // 8! = 1 x 2 x 3 x 4 x 5 x 6 x 7 x 8 
    // 0! = 1

    int product = 1;
    int n = 4;
    for (int i = 1; i<=4; i++){
        product *= i;
    }
    printf("the factorial is %d", product);

}