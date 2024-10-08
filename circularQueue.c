#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5 // Size of the circular queue

// Structure to define a circular queue
struct CircularQueue {
    int front, rear;
    char queue[MAX][100]; // Array to hold the strings
};

// Function to initialize the circular queue
void initQueue(struct CircularQueue* cq) {
    cq->front = -1;
    cq->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(struct CircularQueue* cq) {
    return (cq->front == -1);
}

// Function to check if the queue is full
int isFull(struct CircularQueue* cq) {
    return ((cq->rear + 1) % MAX == cq->front);
}

// Function to insert an element into the circular queue
void insertcq(struct CircularQueue* cq, char* str) {
    if (isFull(cq)) {
        printf("Queue is full. Insertion not possible.\n");
        return;
    }

    // If the queue is empty, set front and rear to 0
    if (cq->front == -1)
        cq->front = cq->rear = 0;
    else
        // Move rear to the next position
        cq->rear = (cq->rear + 1) % MAX;

    // Insert the string
    strcpy(cq->queue[cq->rear], str);
    printf("Inserted: %s\n", str);
}

// Function to delete an element from the circular queue
void deletecq(struct CircularQueue* cq) {
    if (isEmpty(cq)) {
        printf("Queue is empty. Deletion not possible.\n");
        return;
    }

    printf("Deleted: %s\n", cq->queue[cq->front]);

    // If front and rear are the same, reset the queue to empty
    if (cq->front == cq->rear)
        cq->front = cq->rear = -1;
    else
        // Move front to the next position
        cq->front = (cq->front + 1) % MAX;
}

// Function to display the elements of the circular queue
void displaycq(struct CircularQueue* cq) {
    if (isEmpty(cq)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements:\n");
    int i = cq->front;
    do {
        printf("%s\n", cq->queue[i]);
        i = (i + 1) % MAX;
    } while (i != (cq->rear + 1) % MAX);
}

// Main function to test the circular queue
int main() {
    struct CircularQueue cq;
    initQueue(&cq);

    insertcq(&cq, "String1");
    insertcq(&cq, "String2");
    insertcq(&cq, "String3");
    insertcq(&cq, "String4");
    insertcq(&cq, "String5");

    displaycq(&cq);

    deletecq(&cq);
    deletecq(&cq);

    displaycq(&cq);

    insertcq(&cq, "String6");
    insertcq(&cq, "String7");

    displaycq(&cq);

    return 0;
}

