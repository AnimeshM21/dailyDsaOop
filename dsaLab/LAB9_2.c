// Perform UNION and INTERSECTION set operations on singly linked lists with and without header node.

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct Node *next;
} Node;

struct Node *initNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

