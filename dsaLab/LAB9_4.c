#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNode(int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

Node *insertAtEnd(Node *head, int value) {
    Node *newNode = createNode(value);
    
    if (head == NULL) {
        return newNode;
    } else {
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

void removeDuplicate(Node *head) {
    if (head == NULL) {
        printf("The List is empty\n");
        return;
    }

    Node *temp = head;
    while (temp->next != NULL) {
        if (temp->data == temp->next->data) {
            Node *duplicate = temp->next;
            temp->next = temp->next->next;
            free(duplicate);
        } else {
            temp = temp->next;
        }
    }
}

void display(Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    Node *head = NULL;

    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 7);
    head = insertAtEnd(head, 7);
    head = insertAtEnd(head, 9);
    head = insertAtEnd(head, 9);

    printf("Original List: ");
    display(head);

    removeDuplicate(head);

    printf("List after removing duplicates: ");
    display(head);

    return 0;
}