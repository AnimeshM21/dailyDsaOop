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

void inOrder(struct NODE *mynode)
{
    if (mynode != NULL)
    {

        inOrder(mynode->left);
        printf("Tree Elements: %d \n", mynode->data);
        inOrder(mynode->right);
    }
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

    inOrder(root);
    printf("\n");

    // printf("%d",isBST(root));
    if (isBST(root))
    {
        printf("This Tree is a BST");
    }
    else
    {
        printf("This Tree is not a BST");
    }
    return 0;
}
