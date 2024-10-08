#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* next;
} Node;


Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


void removeDuplicates(Node* head) {
    Node* current = head;
    Node* next_next;

    if (current == NULL) return;

    while (current->next != NULL) {
        if (current->data == current->next->data) {
            next_next = current->next->next;
            free(current->next);
            current->next = next_next;
        } else {
            current = current->next;
        }
    }
}


void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


void append(Node** head_ref, int new_data) {
    Node* new_node = createNode(new_data);
    if (*head_ref == NULL) {
        *head_ref = new_node;
    } else {
        Node* last = *head_ref;
        while (last->next != NULL)
            last = last->next;
        last->next = new_node;
    }
}

int main() {
    Node* head = NULL;


    append(&head, 11);
    append(&head, 11);
    append(&head, 11);
    append(&head, 21);
    append(&head, 43);
    append(&head, 43);
    append(&head, 60);

    printf("Linked list before duplicate removal: ");
    printList(head);

    removeDuplicates(head);

    printf("Linked list after duplicate removal: ");
    printList(head);

    return 0;
}

