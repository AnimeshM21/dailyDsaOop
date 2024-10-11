#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct NODE *next;
} NODE;

void LLTraversal(NODE *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
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
    third->next = NULL;

    LLTraversal(head);
    return 0;
}