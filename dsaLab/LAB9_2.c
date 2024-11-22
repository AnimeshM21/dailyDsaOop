// Perform UNION and INTERSECTION set operations on singly linked lists with and without header node.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node *insertNode(struct Node *head, int data)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
    {
        return newNode;
    }
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

int isPresent(struct Node *head, int data)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == data)
            return 1;
        temp = temp->next;
    }
    return 0;
}

struct Node *unionList(struct Node *headA, struct Node *headB)
{
    struct Node *result = NULL;
    struct Node *tempA = headA;
    struct Node *tempB = headB;

    while (tempA != NULL)
    {
        result = insertNode(result, tempA->data);
        tempA = tempA->next;
    }

    while (tempB != NULL)
    {
        if (!isPresent(result, tempB->data))
        {
            result = insertNode(result, tempB->data);
        }
        tempB = tempB->next;
    }
    return result;
}

struct Node *intersectionList(struct Node *headA, struct Node *headB)
{
    struct Node *result = NULL;
    struct Node *tempA = headA;

    while (tempA != NULL)
    {
        if (isPresent(headB, tempA->data))
        {
            result = insertNode(result, tempA->data);
        }
        tempA = tempA->next;
    }
    return result;
}

void display(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
        if (temp != NULL)
            printf("->");
    }
    printf("\n");
}

int main()
{
    struct Node *headA = NULL, *headB = NULL;

    headA = insertNode(headA, 1);
    headA = insertNode(headA, 2);
    headA = insertNode(headA, 3);
    headA = insertNode(headA, 4);

    headB = insertNode(headB, 3);
    headB = insertNode(headB, 4);
    headB = insertNode(headB, 5);
    headB = insertNode(headB, 6);

    printf("List A: ");
    display(headA);
    printf("List B: ");
    display(headB);

    struct Node *unionHead = unionList(headA, headB);
    printf("Union: ");
    display(unionHead);

    struct Node *intersectionHead = intersectionList(headA, headB);
    printf("Intersection: ");
    display(intersectionHead);

    return 0;
}