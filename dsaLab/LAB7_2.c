// Implement two circular queues of integers in a single array where first queue will run from
// 0 to N/2 and second queue will run from N/2+1 to N-1 where N is the size of the array.

#include <stdio.h>
#include <stdlib.h>
#define MAX 25

typedef struct
{
    int *arr;
    int size;
    int front1, front2;
    int rear1, rear2;
} twoCQueue;

void initQueue(twoCQueue *cq, int size)
{
    cq->size = size;
    cq->front1 = -1;
    cq->rear1 = -1;
    cq->front2 = (size / 2);
    cq->rear2 = (size / 2);
    cq->arr = (int *)malloc(size * sizeof(int));
}

int qOneIsFull(twoCQueue *cq)
{
    if ((cq->rear1 + 1) % (cq->size / 2) == cq->front1)
    {
        return 1;
    }
    return 0;
}
int qTwoIsFull(twoCQueue *cq)
{
    if (((cq->rear2 + 1) % (cq->size / 2) + (cq->size / 2)) == cq->front2)
    {
        return 1;
    }
    return 0;
}

int qOneIsEmpty(twoCQueue *cq)
{
    if (cq->front1 == -1)
    {
        return 1;
    }
    return 0;
}

int qTwoIsEmpty(twoCQueue *cq)
{
    if (cq->front2 == (cq->size / 2))
    {
        return 1;
    }
    return 0;
}

void qOneEnqueue(twoCQueue *cq, int value)
{
    if (qOneIsFull(cq))
    {
        printf("This queue-1 is Full");
        return;
    }
    if (cq->front1 == -1)
    {
        cq->front1 = 0;
    }
    cq->rear1 = (cq->rear1 + 1) % (cq->size / 2);
    cq->arr[cq->rear1] = value;
}

void qTwoEnqueue(twoCQueue *cq, int value)
{
    if (qTwoIsFull(cq))
    {
        printf("This queue-2 is Full");
        return;
    }
    if (cq->front2 == (cq->size / 2))
    {
        cq->front2 = (cq->size / 2) + 1;
    }
    cq->rear2 = ((cq->rear2 + 1) % (cq->size / 2)) + (cq->size / 2);
    cq->arr[cq->rear2] = value;
}

int qOneDequeue(twoCQueue *cq)
{
    if (qOneIsEmpty(cq))
    {
        printf("The queue-1 is EMPTY.");
        return -1;
    }
    int result = cq->arr[cq->front1];
    if (cq->front1 == cq->rear1)
    {
        cq->front1 = cq->rear1 = -1;
    }
    else
    {
        cq->front1 = (cq->front1 + 1) % (cq->size / 2);
    }
    return result;
}

int qTwoDequeue(twoCQueue *cq)
{
    if (qTwoIsEmpty(cq))
    {
        printf("The queue-2 is EMPTY.");
        return -1;
    }
    int result = cq->arr[cq->front2];
    if (cq->front2 == cq->rear2)
    {
        cq->front2 = cq->rear2 = (cq->size / 2);
    }
    else
    {
        cq->front2 = ((cq->front2 + 1) % (cq->size / 2)) + (cq->size / 2);
    }
    return result;
}

void qOneDisplay(twoCQueue *cq)
{
    if (qOneIsEmpty(cq))
    {
        printf("Queue-1 is Empty.");
        return;
    }
    printf("Queue-1 Elements: \n");
    int temp = cq->front1;
    while (temp != cq->rear1)
    {
        printf("%d \n", cq->arr[temp]);
        temp = (temp + 1) % (cq->size / 2);
    }
    printf("%d \n", cq->arr[cq->rear1]);
}

void qTwoDisplay(twoCQueue *cq)
{
    if (qTwoIsEmpty(cq))
    {
        printf("Queue-2 is Empty.");
        return;
    }
    printf("Queue-2 Elements: \n");
    int temp = cq->front2;
    while (temp != cq->rear2)
    {
        printf("%d \n", cq->arr[temp]);
        temp = ((temp + 1) % (cq->size / 2)) + (cq->size / 2);
    }
    printf("%d \n", cq->arr[cq->rear2]);
}

int main()
{

    twoCQueue tcq;
    initQueue(&tcq, 25);

    qOneEnqueue(&tcq, 10);
    qOneEnqueue(&tcq, 20);
    qTwoEnqueue(&tcq, 30);
    qTwoEnqueue(&tcq, 40);

    qOneDisplay(&tcq);
    qTwoDisplay(&tcq);

    printf("Dequeue from Queue 1: %d\n", qOneDequeue(&tcq));
    printf("Dequeue from Queue 2: %d\n", qTwoDequeue(&tcq));

    qOneDisplay(&tcq);
    qTwoDisplay(&tcq);
}