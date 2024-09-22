#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int front;
    int rear;
    int *arr;
    int size;
} Queue;

void enqueueFront(Queue *q, int item)
{
    if (q->front == -1)
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

int main()
{

    Queue q;
    q.front = -1;
    q.rear = -1;
    q.size = 10;
    q.arr = (int *)malloc(q.size * (sizeof(int)));
}