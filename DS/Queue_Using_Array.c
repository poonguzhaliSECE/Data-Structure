//Queue Implementation Using Array
#include<stdio.h>
#define max 10
int Queue[max];
int front=-1;
int rear=-1;
void Enqueue(int value)
{
    if(rear==max-1)
    {
        printf("\nOverflow\n");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        Queue[rear]=value;
    }
    else
    {
        rear++;
        Queue[rear]=value;
    }
}
void Dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("\nUnderflow\n");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front++;
    }
}
void Peek()
{
    if(front==-1 && rear==-1)
    {
        printf("\nList Is Empty\n");
    }
    else
    {
        printf("%d ",Queue[front]);
    }
}
void Display()
{
    if(front==-1 && rear==-1)
    {
        printf("\nList Is Empty\n");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d ",Queue[i]);
        }
    }
}
int main()
{
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    printf("After Enqueued\n");
    Display();
    printf("\nFront Points To : ");
    Peek();
    printf("\nAfter Dequeued\n");
    Dequeue();
    Dequeue();
    Display();
    return 0;
}