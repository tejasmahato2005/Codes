#include <stdio.h>

int main(){
    FILE *ptr;
    char name1[34], name2[34];
    int salary1, salary2;
    ptr = fopen("salary.txt", "w");


    printf("enter the name of the employee \n");
    scanf("%s", name1);

    printf("enter the salary of employee \n");
    scanf("%d", &salary1);

    printf("enter the name of employee 2 \n");
    scanf("%s", name2);

    printf("enter the salary of employee 2 \n");
    scanf("%d", &salary2);

    
    fprintf(ptr, "%s", name1);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%d", salary1);
    fprintf(ptr, "%c", '\n');

    fprintf(ptr, "%s", name2);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%d", salary2);
    fprintf(ptr, "%c", '\n');
    
    
    
    return 0;
}