#include <stdio.h>
#include <stdlib.h>

// Node structure definition
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct
{
    Node *front;
    Node *rear;
} Queue;

Node *initNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

Queue *initQueue()
{
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

void enqueue(Queue *queue, int value)
{
    Node *newNode = initNode(value);
    if (!newNode)
        return;
    if (queue->rear == NULL)
    {
        // Queue is empty, so front and rear are the same
        queue->front = queue->rear = newNode;
    }
    else
    {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
    printf("Enqueued: %d\n", value);
}

int dequeue(Queue *queue)
{
    if (queue->front == NULL)
    {
        printf("The queue is empty. Cannot dequeue\n");
        return -1;
    }
    Node *temp = queue->front;
    int data = temp->data;
    queue->front = queue->front->next;
    if (queue->front == NULL)
    {

        queue->rear = NULL;
    }
    free(temp);
    printf("Dequeued Element: %d\n", data);
    return data;
}

void displayQueue(Queue *queue)
{
    Node *current = queue->front;
    if (current == NULL)
    {
        printf("The Queue is empty\n");
        return;
    }
    printf("Queue Elements: ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    Queue *q = initQueue();

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);

    displayQueue(q);

    dequeue(q);
    dequeue(q);

    displayQueue(q);

    return 0;
}