#include <stdio.h>

typedef struct emp
{
    int salary;
    float score;
} employee;


int main(){
    employee e1;
    employee* ptr = &e1;
    ptr->salary = 56;
    ptr->score = 45.3;

    printf("the value of salary is %d and the value of score is %.2f \n", ptr->salary, ptr->score);
    
    return 0;
}