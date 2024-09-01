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