// Implement an ascending priority queue.

#include <stdio.h>
#include <stdlib.h>

#define MAX 25

typedef struct
{
    int arr[MAX];
    int size;
} PQueue;

void initPQueue(PQueue *pq)
{
    pq->size = 0;
}

int isEmpty(PQueue *pq)
{
    if (pq->size == 0)
    {
        return 1;
    }
    return 0;
}

int isFull(PQueue *pq)
{
    if (pq->size == MAX)
    {
        return 1;
    }
    return 0;
}

void PQueueInsert(PQueue *pq, int value)
{
    if (isFull(pq))
    {
        printf("The Queue is full!!");
        return;
    }

    int i = (pq->size) - 1;

    while (i >= 0 && pq->arr[i] > value)
    {
        // shifting larger value to the right to make room for smaller value
        pq->arr[i + 1] = pq->arr[i];
        i--;
    }

    pq->arr[i+1] = value;
    pq->size++;
}

int PQueueDelete(PQueue *pq){
    if(isEmpty(pq)){
        printf("The queue is Empty");
        return -1;
    }

    int small = pq->arr[0];

    for(int i=0;i<(pq->size)-1;i++){
        pq->arr[i] = pq->arr[i+1];
    }
    printf("Just Deleted %d from the queue", small);
    pq->size--;
    return small;
}

void displayPQueue(PQueue *pq){
    if(isEmpty(pq)){
        printf("Nothing to display");
        return;
    }

    printf("THE PRIORITY QUEUE: \n");
    for(int i=0;i<pq->size;i++){
        printf("%d \n", pq->arr[i]);
    }
    printf("\n");
}

int main(){
    PQueue pQueue;
    initPQueue(&pQueue);
    PQueueInsert(&pQueue,7);
    PQueueInsert(&pQueue,1);
    PQueueInsert(&pQueue,9);
    PQueueInsert(&pQueue,4);

    displayPQueue(&pQueue);

    PQueueDelete(&pQueue);
    PQueueDelete(&pQueue);

    displayPQueue(&pQueue);

    return 0;

}