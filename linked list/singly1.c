#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
void print(struct node *head){
    if(head== NULL){
        printf("list is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link; //update the link part so it will get inside the next link of the node
    }
}
void count (struct node *head){
    int count=0;
    if(head==NULL)
        printf("linked list is empty");
    struct node *ptr =NULL;
    ptr=head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->link;
    }
    printf("%d\n",count);
}
int main()
{
    struct node *head=NULL;
    struct node *current=NULL;
    head = (struct node *) malloc (sizeof(struct node));
    head->data=45;
    head->link=NULL;
    

    current = (struct node *) malloc(sizeof(current));
    current->data=98;
    current->link=NULL;
    head->link=current;
    
    // struct node *current2 = (struct node *) malloc(sizeof(current2));
    // current2->data=98;
    // current2->link=NULL;
    // head->link=current;

    current = (struct node *) malloc(sizeof(current));
    current->data=10;
    current->link=NULL;

    head->link->link=current;
    // printf("%d\n", head->data);
    // printf("%d\n", head->link);
    // printf("%d\n", current->data);
    print(head);
    // count(head);
    return 0;
}
