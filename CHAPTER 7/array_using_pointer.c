#include <stdio.h>

int main (){
    int marks[] = {12,34,53,66};

   // int* ptr = &marks[0];
   int* ptr = marks; // same as line 6

   for (int i = 0; i < 4; i++)
   {
      //printf("the marks at index %d is %d\n", i, marks[i]);
      printf("the marks at index %d is %d\n", i, *ptr);
      ptr++;
   }
   
}