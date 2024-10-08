#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Define a simple queue structure
typedef struct {
    int data[MAX];
    int front;
    int rear;
} Queue;

// Function to initialize the queue
void initQueue(Queue* q) {
    q->front = 0;
    q->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(Queue* q) {
    return q->front > q->rear;
}

// Function to enqueue an element
void enqueue(Queue* q, int element) {
    if (q->rear < MAX - 1) {
        q->data[++(q->rear)] = element;
    }
}

// Function to dequeue an element
int dequeue(Queue* q) {
    if (isEmpty(q)) {
        return -1; // Indicate queue is empty
    }
    return q->data[(q->front)++];
}

// Main function
int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K); // Read number of people and position of Vignesh

        // Initialize queue
        Queue queue;
        initQueue(&queue);

        // Enqueue people based on their positions
        for (int i = 1; i <= N; i++) {
            enqueue(&queue, i);
        }

        // Variables to store group information
        int group_vignesh = -1;
        int group_lata = -1;

        // Determine the group number for Vignesh and Lata
        int group_number = 0;
        while (!isEmpty(&queue)) {
            int count = 0;
            while (count < 3 && !isEmpty(&queue)) {
                int person = dequeue(&queue);
                if (person == K) {
                    group_vignesh = group_number;
                }
                if (person == K + 1) {
                    group_lata = group_number;
                }
                count++;
            }
            // Increment the group number
            group_number++;
        }

        // Check if both Vignesh and Lata are in the same group
        if (group_vignesh == group_lata) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
