
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Define the stack structure
typedef struct {
    int data[MAX];
    int top;
} Stack;

// Initialize a stack
void init(Stack* s) {
    s->top = -1;
}

// Push element onto the stack
void push(Stack* s, int value) {
    if (s->top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    s->data[++(s->top)] = value;
}

// Pop element from the stack
int pop(Stack* s) {
    if (s->top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    return s->data[(s->top)--];
}

// Check if the stack is empty
int is_empty(Stack* s) {
    return s->top == -1;
}

// Define the queue structure using two stacks
typedef struct {
    Stack inputStack;
    Stack outputStack;
} Queue;

// Initialize the queue
void initQueue(Queue* q) {
    init(&q->inputStack);
    init(&q->outputStack);
}

// Enqueue operation (always push to input stack)
void enqueue(Queue* q, int value) {
    push(&q->inputStack, value);
    printf("Enqueued: %d\n", value);
}

// Dequeue operation (pop from output stack if possible, otherwise transfer from input stack)
int dequeue(Queue* q) {
    // If both stacks are empty, queue is empty
    if (is_empty(&q->outputStack) && is_empty(&q->inputStack)) {
        printf("Queue is empty\n");
        return -1;
    }

    // If output stack is empty, transfer all elements from input stack to output stack
    if (is_empty(&q->outputStack)) {
        while (!is_empty(&q->inputStack)) {
            int temp = pop(&q->inputStack);
            push(&q->outputStack, temp);
        }
    }

    // Pop the top element from the output stack
    int dequeuedValue = pop(&q->outputStack);
    printf("Dequeued: %d\n", dequeuedValue);
    return dequeuedValue;
}

// Main function to demonstrate the queue implementation
int main() {
    Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    dequeue(&q);
    dequeue(&q);

    enqueue(&q, 40);

    dequeue(&q);
    dequeue(&q);

    return 0;
}
