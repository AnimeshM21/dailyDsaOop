// Implement a queue with two stacks without transferring the elements of the second stack back to stack one.

#include <stdio.h>
#include <stdlib.h>
#define MAX 25

typedef struct
{
    int top;
    int arr[MAX];
} Stack;

typedef struct
{
    Stack stack1;
    Stack stack2;
} Queue;

void initStack(Stack *stack)
{
    stack->top = -1;
}

int stackIsFull(Stack *stack)
{
    if (stack->top == MAX - 1)
    {
        return 1;
    }
    return 0;
}

int stackIsEmpty(Stack *stack)
{
    if (stack->top == -1)
    {
        return 1;
    }
    return 0;
}

void push(Stack *stack, int value)
{
    if (stackIsFull(stack))
    {
        printf("The Stack is FULL");
    }
    stack->arr[++stack->top] = value;
}

int pop(Stack *stack)
{
    if (stackIsEmpty(stack))
    {
        printf("Stack is Empty");
        return -1;
    }
    return stack->arr[stack->top--];
}

void initQueue(Queue *q)
{
    initStack(&q->stack1);
    initStack(&q->stack2);
}

void enqueue(Queue *q, int value)
{
    push(&q->stack1, value);
    printf("Pushed %d onto stack-1 \n", value);
}

int dequeue(Queue *q)
{
    int temp;
    if (stackIsEmpty(&q->stack2))
    {
        if (stackIsEmpty(&q->stack2))
        {
            printf("Queue is EMPTY \n");
            return -1;
        }
        while (!stackIsEmpty(&q->stack1))
        {
            temp = pop(&q->stack1);
            push(&q->stack2, temp);
        }
    }
    int result = pop(&q->stack2);
    printf("Dequeued value: %d \n", result);
    return result;
}

int main()
{
    Queue q;

    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    dequeue(&q);
    dequeue(&q);

    enqueue(&q, 40);
    enqueue(&q, 50);

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
}
