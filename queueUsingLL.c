#include <stdio.h>
#include <stdlib.h>



typedef struct
{
    int data;
    struct NODE *next;
} NODE;

NODE *front = NULL;
NODE *rear = NULL;

void LLTraversal(NODE *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements:%d \n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue( int value)
{
    NODE *n = (NODE *)malloc(sizeof(NODE));
    if (n == NULL)
    {
        printf("QUEUE OVERFLOW \n");
    }

    else
    {
        n->data = value;
        n->next = NULL;
        if (front == NULL)
        {
            front = rear = n;
        }
        else
        {
            rear->next = n;
            rear = n;
        }
    }
}

int dequeue()
{
    int value  = -1;
    NODE *temp= front ;
    if (front == NULL)
    {
        printf("QUEUE UNDERFLOW \n");
    }
    else
    {
       front = front->next; 
       value = temp->data;
       free(temp);
    }
    return value;
}

int main()
{

    printf("Queue brfore Enqueue: \n");
    LLTraversal(front);

    enqueue(32);
    enqueue(23);
    enqueue(3);
    int element = dequeue();
    
    printf("Queue after Enqueue and Dequeue: \n");
    printf("The Dequeued element is %d \n",element);
    LLTraversal(front);

    return 0;
}
