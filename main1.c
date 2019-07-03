#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,size;
    printf("\n please enter size \n");
    scanf("%i",&size);
    //(int *) to define data type of add in this pointer"type casting"
    ptr = (int*)malloc(size * sizeof(int));

    for(int i=0;i<size;i++)
     {
         scanf("%i",&ptr[i]);

     }
     for(int i=0;i<size;i++)
     {
         printf("%i \n",ptr[i]);

     }
    return 0;
}
