// Implement a queue of strings using an output restricted dequeue (No delete rear).

#include <stdio.h>
#include <stdlib.h>

#define MAX 20;

typedef struct{
    int *arr;
    int front;
    int rear;
    int size;
}Queue;

void initQueue(Queue *q,int size){
    Queue q = (Queue*)malloc(sizeof(Queue));
    q->front = -1;
    q->rear = -1;
    q->arr = (int*)malloc(size * sizeof(int));
    q->size = size;
}

void insertRear(Queue *q, int value){
    if(q->rear == q->size-1){
        printf("Queue is full");
        return;
    }
    
    q->arr[++(q->rear)] = value;
}

void insertFront(Queue *q, int value){
    if(q->front == q->rear){
        printf("Queue is full");
        return;
    }
    q->arr[--(q->front)] = value;
}

int deleteFront(Queue *q){
    if(q->front == q->rear){
        printf("Queue is Empty");
        return -1;
    }
    int value = q->arr[q->front];
    q->front--;
    return value;
}

void display(Queue *q){
    if(q->front == q->rear){
        printf("Queue is Empty");
        return;
    }
    
    int temp = q->front;
    printf("Queue Elements: \n");
    while(temp!=q->rear){
        printf("%d \n",q->arr[temp]);
        temp++;
    }
}

int main()
{
    Queue q;
    initQueue(&q,5);

    int choice, item;
    while (1)
    {
        printf("1.Enqueue Rear \n");
        printf("2.Enqueue Front \n");
        printf("3.Dequeue Front \n");
        printf("4.Display \n");
        printf("5.Exit \n ");

        printf("Enter your choice \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Element");
            scanf("%d", &item);
            insertRear(&q, item);
            break;
        case 2:
            printf("Enter Element");
            scanf("%d", &item);
            insertFront(&q, item);
            break;
        case 3:
            printf("Deleted Element: %d",deleteFront(&q));
            break;    
        case 4:
            printf("Displaying all Elements \n");
            display(&q);
            break;
        case 5:
            return 0;
            break;
        default:
            printf("Invalid Choice");
        }
    }
}
