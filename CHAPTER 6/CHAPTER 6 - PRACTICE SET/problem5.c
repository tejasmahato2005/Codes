#include <stdio.h>


int* sum(int a, int b){
    int s = a+b;
    int* ptr = &s;
    printf("the sum is %d\n", s);
    return ptr;
} 

float* average(int a, int b){
    float avg = (a+b)/2.0;
    float * ptr = &avg;
    printf("the average is %f\n", avg);
    return ptr;
}
int main (){
        int x = 4;
        int y = 6;
        int* ptr1;
        float* ptr2;

         ptr1 =  sum(x,y);
         ptr2 = average(x, y);
     
         printf("the address of sum is %u and of average is %u", ptr1, ptr2);

}