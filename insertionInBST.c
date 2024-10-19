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

int isBST(struct NODE *mynode)
{
    static struct NODE *prev = NULL;
    if (mynode != NULL)
    {
        if (!isBST(mynode->left))
        {
            return 0;
        }
        if (prev != NULL && mynode->data <= prev->data)
        {
            return 0;
        }
        prev = mynode;
        return isBST(mynode->right);
    }
    else
    {
        return 1;
    }
}

void insertInBST(struct NODE *mynode, int value)
{

    struct NODE *prev = NULL;
    while (mynode != NULL)
    {
        prev = mynode;
        if (value == mynode->data)
        {
            return;
        }
        else if (mynode->data < value)
        {
            mynode = mynode->right;
        }
        else
        {
            mynode = mynode->left;
        }
    }

    struct NODE *new = createNode(value);
    if (prev->data < value)
    {
        prev->right = new;
    }
    else
    {
        prev->left = new;
    }
}
void inOrder(struct NODE *mynode)
{
    if (mynode != NULL)
    {
        inOrder(mynode->left);
        printf("Tree Elements: %d \n", mynode->data);
        inOrder(mynode->right);
    }
}

int main()
{
    struct NODE *root = createNode(9);
    struct NODE *lchild1 = createNode(2);
    struct NODE *rchild2 = createNode(25);
    struct NODE *lchild11 = createNode(1);
    struct NODE *rchild12 = createNode(4);
    struct NODE *lchild21 = createNode(16);
    struct NODE *rchild22 = createNode(36);

    root->left = lchild1;
    root->right = rchild2;
    lchild1->left = lchild11;
    lchild1->right = rchild12;
    rchild2->left = lchild21;
    rchild2->right = rchild22;

    if (!isBST(root))
    {
        printf("This is not a Binary Tree!");
    }
    else
    {
        insertInBST(root, 7);
    }
    inOrder(root);
    return 0;
}
