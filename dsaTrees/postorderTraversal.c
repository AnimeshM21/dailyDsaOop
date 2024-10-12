#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    int data;
    struct NODE *left;
    struct NODE *right;
};

struct NODE *createNode(int data)
{
    
    struct NODE *newNode = (struct NODE *)malloc(sizeof(struct NODE));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void postOrder(struct NODE *mynode)
{
    if (mynode != NULL)
    {
        postOrder(mynode->left);
        postOrder(mynode->right);
        printf("Tree Elements: %d \n",mynode->data);
    }
    
}

int main()
{
    struct NODE *root = createNode(1);
    struct NODE *lchild1 = createNode(2);
    struct NODE *rchild2 = createNode(4);
    struct NODE *lchild11 = createNode(9);
    struct NODE *rchild12 = createNode(16);
    struct NODE *lchild21 = createNode(25);
    struct NODE *rchild22 = createNode(36);

    root->left = lchild1;
    root->right = rchild2;
    lchild1->left = lchild11;
    lchild1->right = rchild12;
    rchild2->left = lchild21;
    rchild2->right = rchild22;

    postOrder(root);

    return 0;
}