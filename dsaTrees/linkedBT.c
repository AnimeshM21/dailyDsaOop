#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct NODE *left;
    struct NODE *right;
} NODE;

struct NODE *createNode(int data)
{
    struct NODE *newNode;
    newNode = (struct NODE *)malloc(sizeof(struct NODE));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

int main()
{
    struct NODE* root = createNode(1);
    struct NODE* lchild = createNode(2);
    struct NODE* rchild = createNode(4);

    root->left = lchild;
    root->right = rchild;
}