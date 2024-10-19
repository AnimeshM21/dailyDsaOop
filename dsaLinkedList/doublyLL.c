#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    struct NODE* prev;
    struct NODE* next;
}NODE;

void LLTraversalNXT(NODE *head)
{
    NODE *ptr = head;
    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
}

void LLTraversalPRV(NODE *last)
{
    NODE *ptr = last;
    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->prev;
    }
}

int main(){
NODE* head = (NODE*) malloc(sizeof(NODE));
NODE* n2 = (NODE*) malloc(sizeof(NODE));
NODE* n3 = (NODE*) malloc(sizeof(NODE));
NODE* last = (NODE*) malloc(sizeof(NODE));

head->data = 10;
head->prev = NULL;
head->next = n2;

n2->data = 20;
n2->prev = head;
n2->next = n3;

n3->data = 30;
n3->prev = n2;
n3->next = last;

last->data = 40;
last->prev = n3;
last->next = NULL;

printf("Forward Traversing: \n");
LLTraversalNXT(head);
printf("Reverse Traversing: \n");
LLTraversalPRV(last);
}