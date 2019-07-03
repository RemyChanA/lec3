#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next_node;
}*head=NULL;

void ll_in(void)
{
    head = (struct node*) malloc(sizeof(struct node));
    head -> next_node = NULL;
    printf("\n please enter 1st node val \n ");
    scanf("%i",&head -> data);
    //head -> data =10;
}

void ll_cnewn()
{
   struct node *img_p;
   img_p = head;
   for(;;)
   {
       if (img_p -> next_node == NULL)
       {
           break;
       }
       img_p = img_p -> next_node; //jump
   }
    img_p -> next_node = (struct node*)malloc(sizeof(struct node));
    img_p -> next_node -> next_node = NULL;
    printf(" \n enter next node data \n ");
    scanf("%i",&img_p -> next_node -> data);
}
int main()
{
    ll_in();
    printf("\n %i",head ->data);

    ll_cnewn();
    printf("\n  the next node val = %i",head -> next_node ->data);
    ll_cnewn();
    printf("\n  the sec node val = %i",head -> next_node -> next_node ->data);


    return 0;
}
