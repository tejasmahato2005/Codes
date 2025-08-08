#include <stdio.h>

int main(){
    int arr[3][10];
    int mul[] = {2,7,9};
    for (int i = 0; i < 3; i++) // if we run a for loop with i = 0 and iterate while i<n, it goes up to n-1
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j+1);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("the value of arr[i][j] is %d\n", arr[i][j]);
            
        }
        printf("\n");
        
    }
    
    return 0;
}