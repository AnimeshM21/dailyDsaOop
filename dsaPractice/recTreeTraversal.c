#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *left;
    struct Node *right; 
}Node;

struct Node* createNode(int value){
    struct Node* newNode = (Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void inOrder(struct Node *root){
    if(root!=NULL){
        inOrder(root->left);
        printf("Tree Elements: %d \n",root->data);
        inOrder(root->right);
    }
}

void preOrder(struct Node *root){
    if(root!=NULL){
        printf("Tree Elements: %d \n",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct Node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("Tree Elements: %d \n",root->data);
    }
}

int main(){
    struct Node* root = createNode(1);
    struct Node* p1 = createNode(2);
    struct Node* p2 = createNode(3);
    struct Node* p3 = createNode(99);

    root->left = p1;
    root->right = p2;
    p1->left = p3;

    
    printf("Preorder: \n");
    preOrder(root);
    printf("Postorder: \n");
    postOrder(root);
    printf("Inorder: \n");
    inOrder(root);

    return 0;
}