#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUEUE_SIZE 100
#define MAX_STRING_SIZE 256

typedef struct {
    char* data[MAX_QUEUE_SIZE];
    int front;
    int rear;
} Deque;

// Function to initialize the deque
void initDeque(Deque* deque) {
    deque->front = 0;
    deque->rear = 0;
}

// Function to check if the deque is empty
int isEmpty(Deque* deque) {
    return deque->front == deque->rear;
}

// Function to check if the deque is full
int isFull(Deque* deque) {
    return (deque->rear + 1) % MAX_QUEUE_SIZE == deque->front;
}

// Function to enqueue a string (insert at the back)
int enqueue(Deque* deque, const char* str) {
    if (isFull(deque)) {
        return -1; // Queue is full
    }
    deque->data[deque->rear] = (char*)malloc(MAX_STRING_SIZE);
    if (!deque->data[deque->rear]) {
        return -1; // Memory allocation failed
    }
    strncpy(deque->data[deque->rear], str, MAX_STRING_SIZE);
    deque->rear = (deque->rear + 1) % MAX_QUEUE_SIZE;
    return 0;
}

// Function to dequeue a string (remove from the front)
char* dequeue(Deque* deque) {
    if (isEmpty(deque)) {
        return NULL; // Queue is empty
    }
    char* str = deque->data[deque->front];
    deque->front = (deque->front + 1) % MAX_QUEUE_SIZE;
    return str;
}

// Function to free the deque
void freeDeque(Deque* deque) {
    while (!isEmpty(deque)) {
        free(dequeue(deque)); // Free each string
    }
}

int main() {
    Deque myQueue;
    initDeque(&myQueue);

    // Enqueue some strings
    enqueue(&myQueue, "Hello");
    enqueue(&myQueue, "World");
    enqueue(&myQueue, "Queue");
    enqueue(&myQueue, "Implementation");

    // Dequeue and print strings
    while (!isEmpty(&myQueue)) {
        char* str = dequeue(&myQueue);
        printf("%s\n", str);
        free(str); // Free the dequeued string
    }

    // Free the deque resources
    freeDeque(&myQueue);
    return 0;
}
