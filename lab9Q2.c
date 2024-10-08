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

void push(Node** head_ref, int new_data) {
    Node* new_node = createNode(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int isPresent(Node* head, int data) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == data)
            return 1;
        temp = temp->next;
    }
    return 0;
}

Node* getUnion(Node* head1, Node* head2) {
    Node* result = NULL;
    Node* t1 = head1;
    Node* t2 = head2;

    while (t1 != NULL) {
        push(&result, t1->data);
        t1 = t1->next;
    }

    while (t2 != NULL) {
        if (!isPresent(result, t2->data))
            push(&result, t2->data);
        t2 = t2->next;
    }

    return result;
}

Node* getIntersection(Node* head1, Node* head2) {
    Node* result = NULL;
    Node* t1 = head1;

    while (t1 != NULL) {
        if (isPresent(head2, t1->data))
            push(&result, t1->data);
        t1 = t1->next;
    }

    return result;
}

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;

    push(&head1, 20);
    push(&head1, 4);
    push(&head1, 15);
    push(&head1, 10);

    push(&head2, 10);
    push(&head2, 2);
    push(&head2, 4);
    push(&head2, 8);

    Node* unionList = getUnion(head1, head2);
    Node* intersectionList = getIntersection(head1, head2);

    printf("Union: ");
    printList(unionList);
    printf("Intersection: ");
    printList(intersectionList);

    return 0;
}
