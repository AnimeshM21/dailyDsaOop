#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int printAncestors(Node* root, int key) {
    if (root == NULL) {
        return 0;
    }

    if (root->data == key) {
        return 1;
    }

    if (printAncestors(root->left, key) || printAncestors(root->right, key)) {
        printf("%d ", root->data);
        return 1;
    }

    return 0;
}

int main() {
    Node* root = createNode(1);
    root->left = createNode(6);
    root->right = createNode(89);
    root->left->left = createNode(77);
    root->left->right = createNode(5);
    root->right->left = createNode(21);
    root->right->right = createNode(7);

    int key = 7;
    printf("Ancestors of node %d are: ", key);
    if (!printAncestors(root, key)) {
        printf("No ancestors found (key not present in the tree).\n");
    } else {
        printf("\n");
    }

    return 0;
}