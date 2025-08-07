#include <stdio.h>

int main (){
    int a=4;
    printf("%d %d %d \n", a, ++a, a++);
    // 6 6 4 for right to left compilation
    // 4 5 5 for left to right compilation
}