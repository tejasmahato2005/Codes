#include <stdio.h>

int main (){
    int marks[5];

    printf("enter marks of 5 sudents \n");

    //scanf("%d, &marks[0]");
    //scanf("%d, &marks[1]");
    //scanf("%d, &marks[2]");
    //scanf("%d, &marks[3]");
    //scanf("%d, &marks[4]");
    // the index of an array of size n goes from 0 to n-1
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("the value of marks at index %d is %d", i, marks[i]);
    }
    

}