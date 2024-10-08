#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int data[MAX];
    int priority[MAX];
    int size;
} PriorityQueue;

// Function to initialize the priority queue
void initialize(PriorityQueue* pq) {
    pq->size = 0;
}

// Function to insert an element into the priority queue
void insert(PriorityQueue* pq, int data, int priority) {
    if (pq->size == MAX) {
        printf("Priority Queue is full\n");
        return;
    }

    int i;
    for (i = pq->size - 1; i >= 0 && pq->priority[i] > priority; i--) {
        pq->data[i + 1] = pq->data[i];
        pq->priority[i + 1] = pq->priority[i];
    }

    pq->data[i + 1] = data;
    pq->priority[i + 1] = priority;
    pq->size++;
}

// Function to remove the highest priority element
void serve(PriorityQueue* pq) {
    if (pq->size == 0) {
        printf("Priority Queue is empty\n");
        return;
    }

    printf("Served element: %d\n", pq->data[0]);
    for (int i = 0; i < pq->size - 1; i++) {
        pq->data[i] = pq->data[i + 1];
        pq->priority[i] = pq->priority[i + 1];
    }
    pq->size--;
}

// Function to display the priority queue
void display(PriorityQueue* pq) {
    if (pq->size == 0) {
        printf("Priority Queue is empty\n");
        return;
    }

    for (int i = 0; i < pq->size; i++) {
        printf("%d (priority %d) ", pq->data[i], pq->priority[i]);
    }
    printf("\n");
}

int main() {
    PriorityQueue pq;
    initialize(&pq);

    int choice, data, priority;

    do {
        printf("\n1. Insert\n2. Serve\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data and priority: ");
                scanf("%d %d", &data, &priority);
                insert(&pq, data, priority);
                break;
            case 2:
                serve(&pq);
                break;
            case 3:
                display(&pq);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
