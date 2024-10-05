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
    q->front = -1;
    q->rear = -1;
    q->arr = (int *)malloc(size * sizeof(int));
    return q;
}

void enqueue(Queue *q, int item)
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
int dequeue(Queue *q)
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

void display(Queue *cQ)
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

int main()
{

    Queue q;
    q.front = -1;
    q.rear = -1;
    q.size = 10;
    q.arr = (int *)malloc(q.size * (sizeof(int)));
}