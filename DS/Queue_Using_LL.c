//Queue Implementation Using Linked List
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *front=NULL;
struct Node *rear=NULL;

void Enqueue(int x)
{
    struct Node * nn = (struct Node*)malloc(sizeof(struct Node));
    nn->data=x;
    nn->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=nn;
    }
    else
    {
        rear->next=nn;
        rear=nn;
    }
}

void Dequeue()
{
    struct Node *temp = front;
    if(front == NULL && rear == NULL)
    {
        printf("\nQueue Is Empty\n");
    }
    else
    {
        front=front->next;
        free(temp);
    }
}
void Peek()
{
     if(front == NULL && rear == NULL)
    {
        printf("\nQueue Is Empty\n");
    }
    else
    {
        printf("%d ",front->data);
    }
}
void Display()
{
     if(front == NULL && rear == NULL)
    {
        printf("\nQueue Is Empty\n");
    }
    else
    {
        struct Node *temp=front;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    printf("\nAfter Enqueued:\n");
    Display();
    printf("\nFront Points To: ");
    Peek();
    printf("\nAfter Dequeued:\n");
    Dequeue();
    Display();
    printf("\nFront Points To: ");
    Peek();
    return 0;
}