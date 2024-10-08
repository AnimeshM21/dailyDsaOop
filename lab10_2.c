#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = newNode->prev = newNode;
    return newNode;
}

// Function to insert a node at the end of the list
void insertEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* last = (*head)->prev;
        newNode->next = *head;
        (*head)->prev = newNode;
        newNode->prev = last;
        last->next = newNode;
    }
}

// Function to add two numbers represented by circular doubly linked lists
Node* addNumbers(Node* head1, Node* head2) {
    Node* result = NULL;
    Node *temp1 = head1, *temp2 = head2;
    int carry = 0;

    do {
        int sum = temp1->data + temp2->data + carry;
        carry = sum / 10;
        sum = sum % 10;
        insertEnd(&result, sum);
        temp1 = temp1->next;
        temp2 = temp2->next;
    } while (temp1 != head1 || temp2 != head2);

    if (carry > 0) {
        insertEnd(&result, carry);
    }

    return result;
}

// Function to print the list
void printList(Node* head) {
    if (head == NULL) return;
    Node* temp = head;
    do {
        printf("%d", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;


    insertEnd(&head1,5 );
    insertEnd(&head1, 0);
    insertEnd(&head1, 7);
    insertEnd(&head1, 0);
    insertEnd(&head1, 1);
    insertEnd(&head1, 2);

    insertEnd(&head2, 12);
    insertEnd(&head2, 09);
    insertEnd(&head2, 22);
    insertEnd(&head2, 89);

    Node* result = addNumbers(head1, head2);

    printf("Sum: ");
    printList(result);

    return 0;
}
