#include <stdio.h>

int main (){
    int n = 10;
    for (int i = 10; i ; i--){
        printf("%d * %d = %d\n", n, i, n*i);
    }
}