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


void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


Node* mergeLists(Node* head1, Node* head2) {
    Node* mergedHead = NULL;
    Node** lastPtrRef = &mergedHead;

    while (head1 && head2) {
        if (head1->data <= head2->data) {
            *lastPtrRef = head1;
            head1 = head1->next;
        } else {
            *lastPtrRef = head2;
            head2 = head2->next;
        }
        lastPtrRef = &((*lastPtrRef)->next);
    }
    *lastPtrRef = (head1) ? head1 : head2;
    return mergedHead;
}

int main() {
    int N1, N2, data;
    Node *classA = NULL, *classB = NULL;

    printf("Enter number of students in class A and B: ");
    scanf("%d %d", &N1, &N2);

    printf("Enter heights of students in class A: ");
    for (int i = 0; i < N1; i++) {
        scanf("%d", &data);
        append(&classA, data);
    }

    printf("Enter heights of students in class B: ");
    for (int i = 0; i < N2; i++) {
        scanf("%d", &data);
        append(&classB, data);
    }

    printf("Class A: ");
    printList(classA);

    printf("Class B: ");
    printList(classB);

    Node* mergedClass = mergeLists(classA, classB);

    printf("Merged Class: ");
    printList(mergedClass);

    return 0;
}

