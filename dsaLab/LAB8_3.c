#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 100

typedef struct
{
    char arr[MAX];
    int front;
    int rear;
} Queue;

void initQueue(Queue *q)
{
    q->front = -1;
    q->rear = -1;
}

bool isEmpty(Queue *q)
{
    return q->front == -1;
}

bool isFull(Queue *q)
{
    return q->rear == MAX - 1;
}

void enqueueRear(Queue *q, char value)
{
    if (isFull(q))
    {
        printf("The queue is full\n");
        return;
    }
    if (isEmpty(q))
    {
        q->front = 0;
    }
    q->arr[++q->rear] = value;
}

char dequeueFront(Queue *q)
{
    if (isEmpty(q))
    {
        printf("The queue is empty\n");
        return '\0';
    }
    char value = q->arr[q->front];
    if (q->front == q->rear)
    {
        q->front = q->rear = -1;
    }
    else
    {
        q->front++;
    }
    return value;
}

char dequeueRear(Queue *q)
{
    if (isEmpty(q))
    {
        printf("The queue is empty\n");
        return '\0';
    }
    char value = q->arr[q->rear];
    if (q->front == q->rear)
    {
        q->front = q->rear = -1;
    }
    else
    {
        q->rear--;
    }
    return value;
}

bool isPalindrome(char *str)
{
    Queue q;
    initQueue(&q);
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        enqueueRear(&q, str[i]);
    }

    while (q->front < q->rear)
    {
        char frontChar = dequeueFront(&q);
        char rearChar = dequeueRear(&q);
        if (frontChar != rearChar)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char str[MAX];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str))
    {
        printf("The string '%s' is a palindrome.\n", str);
    }
    else
    {
        printf("The string '%s' is not a palindrome.\n", str);
    }
    return 0;
}