#include <stdio.h>

float c2f(float);

float c2f(float c){
        return (9.0/5.0)*c + 32;
}
int main (){
        float c=45;
        printf("celsius to fahrenheit for %f is %.2f", c2f(c));
}