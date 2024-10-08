#include <stdio.h>
#define N 10 // Size of the array

int arr[N];
int front1 = -1, rear1 = -1;
int front2 = N/2, rear2 = N/2;

// Function to check if the first queue is full
int isFull1() {
    return (rear1 + 1) % (N/2) == front1;
}

// Function to check if the first queue is empty
int isEmpty1() {
    return front1 == -1;
}

// Function to enqueue an element in the first queue
void enqueue1(int data) {
    if (isFull1()) {
        printf("Queue 1 Overflow\n");
        return;
    }
    if (isEmpty1()) {
        front1 = rear1 = 0;
    } else {
        rear1 = (rear1 + 1) % (N/2);
    }
    arr[rear1] = data;
    printf("Enqueued %d in Queue 1\n", data);
}

// Function to dequeue an element from the first queue
int dequeue1() {
    if (isEmpty1()) {
        printf("Queue 1 Underflow\n");
        return -1;
    }
    int data = arr[front1];
    if (front1 == rear1) {
        front1 = rear1 = -1;
    } else {
        front1 = (front1 + 1) % (N/2);
    }
    return data;
}

// Function to check if the second queue is full
int isFull2() {
    return (rear2 + 1) % (N/2) + (N/2 + 1) == front2;
}

// Function to check if the second queue is empty
int isEmpty2() {
    return front2 == N/2;
}

// Function to enqueue an element in the second queue
void enqueue2(int data) {
    if (isFull2()) {
        printf("Queue 2 Overflow\n");
        return;
    }
    if (isEmpty2()) {
        front2 = rear2 = N/2 + 1;
    } else {
        rear2 = (rear2 + 1) % (N/2) + (N/2 + 1);
    }
    arr[rear2] = data;
    printf("Enqueued %d in Queue 2\n", data);
}

// Function to dequeue an element from the second queue
int dequeue2() {
    if (isEmpty2()) {
        printf("Queue 2 Underflow\n");
        return -1;
    }
    int data = arr[front2];
    if (front2 == rear2) {
        front2 = rear2 = N/2;
    } else {
        front2 = (front2 + 1) % (N/2) + (N/2 + 1);
    }
    return data;
}

int main() {
    // Test the queues
    enqueue1(10);
    enqueue1(20);
    enqueue1(30);
    printf("Dequeued from Queue 1: %d\n", dequeue1());
    enqueue2(40);
    enqueue2(50);
    enqueue2(60);
    printf("Dequeued from Queue 2: %d\n", dequeue2());
    return 0;
}
