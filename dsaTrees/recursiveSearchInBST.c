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
struct NODE *recSearchInBST(struct NODE *mynode, int key)
{
    if (mynode == NULL)
    {
        return NULL;
    }
    if (mynode->data == key)
    {
        return mynode;
    }
    else if (mynode->data < key)
    {
        return recSearchInBST(mynode->right, key);
    }
    else
    {
        return recSearchInBST(mynode->left, key);
    }
}

int main()
{
    struct NODE *root = createNode(9);
    struct NODE *lchild1 = createNode(2);
    struct NODE *rchild2 = createNode(25);
    struct NODE *lchild11 = createNode(10);
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
        printf("\n");
        struct NODE *n = recSearchInBST(root, 9);
        if (n != NULL)
        {
            printf("ELEMENT FOUND: %d", n->data);
        }
        else
        {
            printf("ELEMENT NOT FOUND");
        }
    }
    return 0;
}
 