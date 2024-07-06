#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* head=NULL;

struct node* createNode(int data)
{
    struct node* nn = (struct node*)malloc(sizeof(struct node));
    nn->data=data;
    nn->next=NULL;
    return nn;
}

void insert(int value)
{
    struct node* nn=createNode(value);
    if (head==NULL)
        head=nn;
    else
    {
        nn->next=head;
        head=nn;
    }
}

int detectLoop()
{
    struct node *slow=head,*fast=head;
    while (slow!=NULL&fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if (slow==fast)
        return 1;
    }
    return 0;
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    struct node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    //temp->next=head;
    if(detectLoop())
        printf("Loop exists in the Linked List\n");
    else
        printf("Loop does not exist in the Linked List\n");
    return 0;
}