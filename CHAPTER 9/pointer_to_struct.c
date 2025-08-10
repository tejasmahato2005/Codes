#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name;
};

int main(){
    struct employee e1;
    e1.code = 69;
    struct employee *ptr; //*ptr is storing address of employee structure
    ptr = &e1;
    // now we can print structure elements using:
    //printf("%d", (*ptr).code);
    printf("%d", ptr->code); // same as line 16
    return 0;
}