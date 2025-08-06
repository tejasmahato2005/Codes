#include <stdio.h>

int main (){
    int a=4 ,b=2,c=6,d=32;
    if(a>b && a>c && a>d){
        printf("the greatest of all is %d", a);
    }
    else if(b>a && b>c && b>d){
        printf("the greatest of all is %d", b);

    }

    else if (c>a && c>b && c>d){
        printf("the greatest of all is %d", c);
    }
    else if(d>a && d>b && d>c){
        printf("the greatest of all is %d", d);
    }

    }
