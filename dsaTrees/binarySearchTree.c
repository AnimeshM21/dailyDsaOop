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
struct NODE *prev = NULL;

int isBST(struct NODE *mynode) {
    if (mynode != NULL) {
        // Traverse left subtree
        if (!isBST(mynode->left)) {
            return 0;
        }

        // Check if current node's data is greater than the previous node's data
        if (prev != NULL && mynode->data <= prev->data) {
            return 0;
        }
        
        // Update prev to current node
        prev = mynode;

        // Traverse right subtree
        return isBST(mynode->right);
    }
    return 1;
}

struct NODE* inOrderSuccessor(struct NODE* root, struct NODE* target) {
    struct NODE* successor = NULL;

    while (root != NULL) {
        if (target->data < root->data) {
            // Potential successor found, move to left subtree
            successor = root;
            root = root->left;
        } else {
            // Move to the right subtree
            root = root->right;
        }
    }
    return successor; // This may return NULL if no successor exists
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
    struct NODE *target = lchild1; // Node with data 2
    struct NODE *successor = inOrderSuccessor(root, target);

    if (successor != NULL) {
        printf("The inOrder successor of %d is: %d\n", target->data, successor->data);
    } else {
        printf("The node %d has no inOrder successor\n", target->data);
    }

    return 0;
}
