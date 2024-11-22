// Display the elements of Binary Tree created using iterative preorder, post-order (Use single
// stack), in-order and level-order traversals.

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct{
    int data;
    struct Node *left;
    struct Node *right;
}Node;

typedef struct{
    int top;
    struct Node *arr[MAX];
}Stack;

typedef struct{
    int front;
    int rear;
    struct Node* items[MAX];
}Queue;

struct Node* initNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node))
}
