#include<stdio.h>
#include<stdlib.h>
void begininsert(int);
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void main()
{
    int choice, item;
    do{
        printf("\nEnter the item you want to insert: ");
        scanf("%d",&item);
        begininsert(item);
    }while(choice==0);
}
void begininsert(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr== NULL)
        printf("overflow");
    else
    {
        ptr->data=item;
        ptr->next=head;
    }
}