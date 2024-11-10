// Implement two circular queues of integers in a single array where first queue will run from
// 0 to N/2 and second queue will run from N/2+1 to N-1 where N is the size of the array.


#include <stdio.h>
#include <stdlib.h>
#define MAX 25

typedef struct{
    int *arr;
    int size;
    int front1,front2;
    int rear1,rear2;
}twoCQueue;

void initQueue(twoCQueue *cq,int size){
    cq->size = size;
    cq->front1 = -1;
    cq->front2 = size/2;
    cq->rear1 = -1;
    cq->rear2 = size/2;
    cq->arr = (int *)malloc(size * sizeof(int));
}

int qOneIsFull(twoCQueue *cq){
    if((cq->rear1+1) % cq->size /2 == cq->front1){
        return 0;
    }
    return 1;
}
int qTwoIsFull(twoCQueue *cq){
    if((cq->rear2+1) % cq->size /2 == cq->front2){
        return 0;
    }
    return 1;
}

int qOneIsEmpty(twoCQueue *cq){
    if(cq->front1 == -1){
        return 0;
    }
    return 1;
}

int qOneIsEmpty(twoCQueue *cq){
    if(cq->front2 == cq->size/2){
        return 0;
    }
    return 1;
}



