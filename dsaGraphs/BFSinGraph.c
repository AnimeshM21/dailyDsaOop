#include <stdio.h>
#include <stdlib.h>

#define MAX 20

typedef struct {
    int arr[MAX];
    int front;
    int rear;
} Queue;

void initQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(Queue *q) {
    return q->rear == MAX - 1;
}

int isEmpty(Queue *q) {
    return q->front == -1 || q->front > q->rear;
}

void enqueue(Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    }
    if (q->front == -1) {
        q->front = 0;
    }
    q->arr[++(q->rear)] = value;
}

int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("The Queue is Empty\n");
        return -1;
    }
    int value = q->arr[q->front++];
    if (q->front > q->rear) {
        q->front = q->rear = -1;  // Reset the queue if empty
    }
    return value;
}

void bfs(int adjMatrix[7][7], int startNode) {
    Queue q;
    initQueue(&q);

    int visited[7] = {0, 0, 0, 0, 0, 0, 0};

    printf("Starting from node: %d\n", startNode);
    visited[startNode] = 1;
    enqueue(&q, startNode);

    while (!isEmpty(&q)) {
        int node = dequeue(&q);
        printf("%d ", node);

        for (int j = 0; j < 7; j++) {
            if (adjMatrix[node][j] == 1 && visited[j] == 0) {
                visited[j] = 1;
                enqueue(&q, j);
            }
        }
    }
    printf("\n");
}

int main() {
    int adjMatrix[7][7] = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}
    };

    bfs(adjMatrix, 6);
    return 0;
}