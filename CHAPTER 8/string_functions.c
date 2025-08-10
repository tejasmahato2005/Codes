#include <stdio.h>
#include <string.h>

int main(){
    char st[]="rohan";
    char s1[56]="rohan";
    char s2[56]=" bhai";

    //printf("%d", strlen(st));
    
    char target[30];
    strcpy(target, st); //target now contains "rohan"

    strcat(s1, s2);
    //printf("%s", s1);
    
    int a = strcmp("far", "joke");
    printf("%d", a);
    return 0;
}