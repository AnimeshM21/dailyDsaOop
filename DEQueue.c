#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int front;
    int rear;
    int *arr;
    int size;
} Queue;

Queue *createQueue(int size)
{
    Queue *q = (Queue *)malloc(sizeof(Queue));
    q->size = size;
    q->front = -1 ;
    q->rear = -1 ;
    q->arr = (int *)malloc(size * sizeof(int));
    return q;
}

void enqueueFront(Queue *q, int item)
{
    if (q->front == q->rear)
    {
        printf("The queue is Full");
    }
    else
    {
        q->arr[--(q->front)] = item;
    }
}

void enqueueRear(Queue *q, int item)
{
    if (q->rear == (q->size) - 1)
    {
        printf("The queue is Full");
    }
    else
    {
        q->arr[++(q->rear)] = item;
    }
}
int dequeueFront(Queue *q)
{
    if (q->front == q->rear)
    {
        printf("The Queue is Empty");
    }
    else
    {
        return q->arr[(q->front)--];
    }
}

int dequeueRear(Queue *q)
{
    if (q->front == q->rear)
    {
        printf("The Queue is Empty");
    }
    else
    {
        return q->arr[(q->rear)--];
    }
}

void display(Queue *q)
{
    if (q->front == q->rear)
    {
        printf("QUEUE UNDERFLOW");
    }
    else
    {
        int temp = q->front;
        printf("Queue Elements: \n");
        while (temp != q->rear)
        {
            printf("%d \n", q->arr[temp]);
            temp++;
        }
    }
}

int main() {
    int size = 5;
    Queue *q = createQueue(size);

    
    enqueueRear(q, 90);
    enqueueRear(q, 100);
    enqueueFront(q, 10);
    display(q);
    // printf("Dequeued from front: %d\n", dequeueFront(q));
    // printf("Dequeued from rear: %d\n", dequeueRear(q));

    
    return 0;
}