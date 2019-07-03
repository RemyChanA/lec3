#include <stdio.h>
#include <stdlib.h>
#define add(x,y) (x+y)
#define diff(x,y) (x-y)
#define mul(x,y) (x*y)


int addi(int x ,int y)
{
    return add(x,y);
}

int diffi(int x ,int y)
{
    return diff(x,y);
}

int muli(int x ,int y)
{
    return mul(x,y);
}

int main()
{
    int x,y,sum,min,mu;

    printf(" \n enter 1st nym \n");
    scanf("%i",&x);
    printf("\n enter 2nd nym \n");
    scanf("%i",&y);

   sum = addi(x,y);
   min = diffi(x,y);
   mu = muli(x,y);
   printf("\n sum= %i \n",sum);
   printf("\n diff= %i \n",min);
   printf("\n mul= %i \n",mu);

    return 0;
}
