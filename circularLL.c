#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *next;
} NODE;

void LLTraversal(NODE *head)
{
    struct NODE *ptr = head;

    do
    {
        printf("Elements: %d \n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct NODE *insertAtHead(NODE *head, int item)
{
    struct NODE *ptr = (struct NODE *)malloc(sizeof(struct NODE));
    ptr->data = item;

    struct NODE *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}
int main()
{
    NODE *head = (NODE *)malloc(sizeof(NODE));

    NODE *first = (NODE *)malloc(sizeof(NODE));

    NODE *second = (NODE *)malloc(sizeof(NODE));

    NODE *third = (NODE *)malloc(sizeof(NODE));

    head->data = 50;
    head->next = first;

    first->data = 60;
    first->next = second;

    second->data = 70;
    second->next = third;

    third->data = 80;
    third->next = head;
    printf("Circular Linked list before Insertion: \n");
    LLTraversal(head);
    printf("Circular Linked list after Insertion: \n");
    head = insertAtHead(head, 40);
    LLTraversal(head);

    return 0;
}