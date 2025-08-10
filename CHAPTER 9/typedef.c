#include <stdio.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];   
} emp;

int main(){
    //typedef int rohan;
    //rohan a = 69;
    //printf("the value of a is %d \n", a);

    //typedef struct employee emp;

    emp e1;
    emp* ptr1 = &e1;
    e1.code = 4511;
    strcpy(e1.name, "rohan");
    e1.salary = 54.44;

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s\n" , ptr1->code, ptr1->salary, ptr1->name );

    
    return 0;
}