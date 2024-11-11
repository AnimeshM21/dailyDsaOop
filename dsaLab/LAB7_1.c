#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

typedef struct
{
    int front;
    int rear;
    int size;
    char (*arr)[MAX];
} circQueue;

void enqueue(circQueue *cQ, char item[MAX])
{
    if ((cQ->rear + 1) % cQ->size == cQ->front)
    {
        printf("Queue OVERFLOW\n");
        return;
    }
    else
    {
        cQ->rear = (cQ->rear + 1) % cQ->size;
        strcpy(cQ->arr[cQ->rear], item);
    }
}

void dequeue(circQueue *cQ, char result[MAX])
{
    if (cQ->front == cQ->rear)
    {
        printf("QUEUE UNDERFLOW\n");
        return;
    }
    else
    {
        cQ->front = (cQ->front + 1) % cQ->size;
    }
    strcpy(result, cQ->arr[cQ->front]);
}

void display(circQueue *cQ)
{
    if (cQ->front == cQ->rear)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
        int temp = cQ->front;
        printf("Queue Elements: \n");
        while (temp != cQ->rear)
        {
            temp = (temp + 1) % cQ->size;
            printf("%s\n", cQ->arr[temp]);
        }
    }
}

int main()
{
    int queueSize = 4;
    circQueue *cQ = (circQueue *)malloc(sizeof(circQueue));
    cQ->arr = (char(*)[MAX])malloc(queueSize * sizeof(*cQ->arr));
    cQ->front = 0;
    cQ->rear = 0;
    cQ->size = queueSize;

    int choice;
    char item[MAX], result[MAX];
    while (1)
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Element: ");
            getchar();
            fgets(item, MAX, stdin);
            item[strcspn(item, "\n")] = '\0';
            enqueue(cQ, item);
            break;
        case 2:
            dequeue(cQ, result);
            if (cQ->front != cQ->rear)
            {
                printf("Dequeued item: %s\n", result);
            }
            display(cQ);
            break;
        case 3:
            display(cQ);
            break;
        case 4:
            free(cQ->arr);
            free(cQ);
            return 0;
        default:
            printf("Invalid Choice\n");
        }
    }
}