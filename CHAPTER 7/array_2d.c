#include <stdio.h>

int main (){
    int arr[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter the value of arr[%d][%d]\n", i, j);
            scanf("%d", &arr[i][j]);
        }
        
    }
        //for (int i = 0; i < 3; i++)
        //{
            //for (int j = 0;  j < 2; i++)
            //{
                //printf("the value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
            //}
            
        //}

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("%d", arr[i][j]);
            }
            printf("\n");
            
        }
        
        
    
}