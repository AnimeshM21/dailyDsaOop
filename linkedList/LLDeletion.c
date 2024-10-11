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

// Function to delete a Node at the Beginning of a Linked-List
NODE *deleteBegg(NODE *head)
{
    NODE *nptr = head;
    head = head->next;
    free(nptr);
    return head;
}

// Function to delete a Node at a given Index of a Linked-List
NODE *deleteIndex(NODE *head, int index)
{
    NODE *temp1 = head;
    NODE *temp2 = temp1->next;
    for (int i = 0; i < index - 1; i++)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    free(temp2);
    return head;
}

// Function to delete a Node at the End of a Linked-List
NODE *deleteEnd(NODE *head)
{
    NODE *temp1 = head;
    NODE *temp2 = temp1->next;
    while (temp2->next != NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    temp1->next = NULL;
    free(temp2);
    return head;
}

// Function to delete a element with a given value of a Linked-List
NODE *deleteElement(NODE *head, int value)
{
    NODE *temp1 = head;
    NODE *temp2 = temp1->next;
    while (temp2->data != value && temp2->next != NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if (temp2->data == value)
    {
        temp1->next = temp2->next;
        free(temp2);
    }
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
    third->next = NULL;

    printf("Linked List before deletion \n");
    LLTraversal(head);

    // head = deleteBegg(head);
    // printf("Linked List after deletion of first Node\n");

    // head = deleteIndex(head, 2);
    // printf("Linked List after deletion of Node at given Index\n");

    // head = deleteEnd(head);
    // printf("Linked List after deletion of Node at End\n");

    head = deleteElement(head, 70);
    printf("Linked List after deletion of the particular element\n");
    LLTraversal(head);

    return 0;
}