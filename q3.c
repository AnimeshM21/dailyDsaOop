#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for a deque node
typedef struct Node {
    char data;
    struct Node* next;
    struct Node* prev;
} Node;

// Define the structure for the deque
typedef struct Deque {
    Node* front;
    Node* rear;
} Deque;

// Function to create a new node
Node* createNode(char data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = newNode->prev = NULL;
    return newNode;
}

// Function to initialize the deque
Deque* createDeque() {
    Deque* deque = (Deque*)malloc(sizeof(Deque));
    deque->front = deque->rear = NULL;
    return deque;
}

// Function to insert an element at the rear of the deque
void insertRear(Deque* deque, char data) {
    Node* newNode = createNode(data);
    if (deque->rear == NULL) {
        deque->front = deque->rear = newNode;
    } else {
        deque->rear->next = newNode;
        newNode->prev = deque->rear;
        deque->rear = newNode;
    }
}

// Function to delete an element from the front of the deque
char deleteFront(Deque* deque) {
    if (deque->front == NULL) {
        return '\0';
    }
    Node* temp = deque->front;
    char data = temp->data;
    deque->front = deque->front->next;
    if (deque->front == NULL) {
        deque->rear = NULL;
    } else {
        deque->front->prev = NULL;
    }
    free(temp);
    return data;
}

// Function to delete an element from the rear of the deque
char deleteRear(Deque* deque) {
    if (deque->rear == NULL) {
        return '\0';
    }
    Node* temp = deque->rear;
    char data = temp->data;
    deque->rear = deque->rear->prev;
    if (deque->rear == NULL) {
        deque->front = NULL;
    } else {
        deque->rear->next = NULL;
    }
    free(temp);
    return data;
}

// Function to check if the deque is empty
int isEmpty(Deque* deque) {
    return deque->front == NULL;
}

// Function to check if a given string is a palindrome using a deque
int isPalindrome(char* str) {
    int len = strlen(str);
    Deque* deque = createDeque();

    // Insert all characters of the string into the deque
    for (int i = 0; i < len; i++) {
        insertRear(deque, str[i]);
    }

    // Check for palindrome
    while (!isEmpty(deque) && deque->front != deque->rear) {
        if (deleteFront(deque) != deleteRear(deque)) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }

    return 0;
}

