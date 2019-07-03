#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,j;
    printf("\n please enter the operation 1-->+ \n 2-->- \n 3-->* \n");
    scanf("%i",&x);
    printf(" \n enter 1st nym \n");
    scanf("%i",&i);
    printf("\n enter 2nd nym \n");
    scanf("%i",&j);
    switch(x)
    {
    case 1 :
        printf("\n sum= %i",(i+j));
        break;
    case 2 :
        printf("\n diff= %i ",(i-j));
        break;
    case 3 :
        printf("\n mul= %i",(i*j));
        break;

    }
    return 0;
}
