#include <stdio.h>
#include <stdlib.h>

int main(){
    int n =5;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int)); // if using malloc then change only malloc(n *sizeof(int))
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("the array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }
    n =10;
    ptr = (int *) realloc(ptr, 10* sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("the array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }
    
    
    
    
    
    
    return 0;
}