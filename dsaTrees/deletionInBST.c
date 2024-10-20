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

void inOrder(struct NODE *mynode)
{
    if (mynode != NULL)
    {
        inOrder(mynode->left);
        printf("Tree Elements: %d \n", mynode->data);
        inOrder(mynode->right);
    }
}

struct NODE *inOrderPre(struct NODE *mynode)
{
    mynode = mynode->left;
    while (mynode->right != NULL)
    {
        mynode = mynode->right;
    }
    return mynode;
}

struct NODE *deleteInBST(struct NODE *mynode, int value)
{
    struct NODE *iPre;
    if (mynode == NULL)
    {
        return NULL;
    }

    if (value < mynode->data)
    {
        mynode->left = deleteInBST(mynode->left, value);
    }
    else if (value > mynode->data)
    {
        mynode->right = deleteInBST(mynode->right, value);
    }
    else
    {

        if (mynode->left == NULL)
        {
            struct NODE *temp = mynode->right;
            free(mynode);
            return temp;
        }
        else if (mynode->right == NULL)
        {
            struct NODE *temp = mynode->left;
            free(mynode);
            return temp;
        }

        iPre = inOrderPre(mynode);
        mynode->data = iPre->data;
        mynode->left = deleteInBST(mynode->left, iPre->data);
    }

    return mynode;
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

    inOrder(root);

    if (!isBST(root))
    {
        printf("This is not a Binary Tree!");
    }
    else
    {
        root = deleteInBST(root, 16);
    }
    printf("\n");
    inOrder(root);

    return 0;
}
