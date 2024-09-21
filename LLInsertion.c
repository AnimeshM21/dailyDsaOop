#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct NODE *next;
    
} NODE;

// Function to traverse the LL i.e show every value in the Linked-List
void LLTraversal(NODE *ptr)
{

    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
}
// Function to insert a Node at the Beginning of a Linked-List
NODE *insertBegg(NODE *head, int value)
{
    NODE *nptr = (NODE *)malloc(sizeof(NODE));

    nptr->data = value;
    nptr->next = head;
    return nptr;
}

// Function to insert a Node at any given index of a Linked-List
NODE *insertBTW(NODE *head, int value, int index)
{
    NODE *nptr = (NODE *)malloc(sizeof(NODE));
    NODE *temp = head;
    int i = 0;
    while (i != index - 1)
    {
        temp = temp->next;
        i++;
    }
    nptr->data = value;
    nptr->next = temp->next;
    temp->next = nptr;
    return head;
}

// Function to insert a Node at the End of a Linked-List
NODE *insertEnd(NODE *head, int value)
{
    NODE *nptr = (NODE *)malloc(sizeof(NODE));
    nptr->data = value;
    NODE *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = nptr;
    nptr->next = NULL;
    return head;
}

// Function to insert a Node after a given index of a Linked-List
NODE *insertAfter(NODE *head, NODE *prevNode, int value)
{
    NODE *nptr = (NODE *)malloc(sizeof(NODE));
    nptr->data = value;
    nptr->next = prevNode->next;
    prevNode->next = nptr;

    return head;
}

int main()
{
    // Dynamic memory allocation for all required pointers
    NODE *head = (NODE *)malloc(sizeof(NODE));
    NODE *first = (NODE *)malloc(sizeof(NODE));
    NODE *second = (NODE *)malloc(sizeof(NODE));
    NODE *third = (NODE *)malloc(sizeof(NODE));
    NODE *nptr = (NODE *)malloc(sizeof(NODE));

    // Value and next pointer assignment for all nodes
    head->data = 50;
    head->next = first;

    first->data = 60;
    first->next = second;

    second->data = 70;
    second->next = third;

    third->data = 80;
    third->next = NULL;

    // Calling Traversal Function for printing all values in the Linked-List
    LLTraversal(head);
    printf("\n");
    // head = insertBegg(head,40);
    // printf("Inserted at  First NODE \n");

    // head = insertBTW(head,40,2);
    // printf("Inserted a NODE at INDEX of choice \n");

    // head = insertEnd(head, 69);
    // printf("Inserted a NODE at the END of the Linked-List \n");

    // head = insertAfter(head, second, 69);
    // printf("Inserted a NODE after the given NODE \n");

    /*Calling Traversal function again to show the
    Linked-list with the updated values*/
    LLTraversal(head);
    return 0;
}