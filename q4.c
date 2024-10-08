#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct Queue {
    int arr[MAX];
    int front;
    int rear;
} Queue;

// Function to initialize the queue
void initQueue(Queue* q) {
    q->front = -1;
    q->rear = -1;
}

// Function to check if the queue is empty
int empty(Queue* q) {
    return q->front == -1;
}

// Function to add an item to the rear of the queue
void enqueue(Queue* q, int x) {
    if (q->rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (empty(q)) {
        q->front = 0;
    }
    q->arr[++q->rear] = x;
}

// Function to remove an item from the front of the queue
int dequeue(Queue* q) {
    if (empty(q)) {
        printf("Queue Underflow\n");
        return -1;
    }
    int data = q->arr[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front++;
    }
    return data;
}

// Recursive function to reverse the queue
void reverseQueue(Queue* q) {
    if (empty(q)) {
        return;
    }
    int data = dequeue(q);
    reverseQueue(q);
    enqueue(q, data);
}

// Function to print the queue
void printQueue(Queue* q) {
    if (empty(q)) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}

int main() {
    Queue q;
    initQueue(&q);

    // Enqueue some elements
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);

    printf("Original Queue: ");
    printQueue(&q);

    // Reverse the queue
    reverseQueue(&q);

    printf("Reversed Queue: ");
    printQueue(&q);

    return 0;
}

