#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct NODE *next;
} NODE;

void LLTraversal(NODE *ptr,NODE *head)
{
    ptr =  head;
    while (ptr->next !=head )
    {
        printf("Elements: %d \n", ptr->data);
        ptr = ptr->next;
    }
    printf("Elements: %d \n", ptr->data);
}

int main()
{

    NODE *head = (NODE *)malloc(sizeof(NODE));
    NODE *first = (NODE *)malloc(sizeof(NODE));
    NODE *second = (NODE *)malloc(sizeof(NODE));
    NODE *third = (NODE *)malloc(sizeof(NODE));

    head->data = 10;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = head;

    printf("The Elements of the linked list are as follows:");
    LLTraversal(head,head);
    return 0;
}