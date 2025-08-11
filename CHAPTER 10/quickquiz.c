#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("rohan.txt", "r");
    if (ptr == NULL)
    {
        printf("the file doesn't exist sorry \n");
        
    }
    else{
        int num;
        fscanf(ptr, "%d", &num);
        printf("the value of num is %d \n", num);

        fscanf(ptr, "%d", &num);
        printf("the value of num is %d \n", num);

        fclose(ptr);
        
    }
    
    return 0;
}