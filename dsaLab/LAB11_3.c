#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct Node
{
    char data;
    struct Node *left;
    struct Node *right;
} Node;

Node *createNode(char value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void push(Node *stack[], int *top, Node *node)
{
    stack[++(*top)] = node;
}

Node *pop(Node *stack[], int *top)
{
    return stack[(*top)--];
}

Node *createExpressionTree(char *expression)
{
    Node *stack[100];
    int top = -1;

    for (int i = 0; expression[i] != '\0'; i++)
    {
        if (isdigit(expression[i]))
        {
            Node *operandNode = createNode(expression[i]);
            stack[++top] = operandNode;
        }
        else
        {
            Node *operatorNode = createNode(expression[i]);
            operatorNode->right = stack[top--];
            operatorNode->left = stack[top--];
            stack[++top] = operatorNode;
        }
    }
    return stack[top];
}

int evaluate(Node *root)
{
    if (root == NULL)
        return 0;
    if (isdigit(root->data))
    {
        return root->data - '0';
    }
    int left = evaluate(root->left);
    int right = evaluate(root->right);

    switch (root->data)
    {
    case '+':
        return left + right;
    case '-':
        return left - right;
    case '*':
        return left * right;
    case '/':
        return left / right;
    }
    return 0;
}

void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%c ", root->data);
        inorder(root->right);
    }
}

int main()
{
    char postfix[] = "53+82-*";
    Node *root = createExpressionTree(postfix);

    printf("Inorder traversal of the expression tree: ");
    inorder(root);
    printf("\n");

    int result = evaluate(root);
    printf("Evaluation result of the expression tree: %d\n", result);

    return 0;
}