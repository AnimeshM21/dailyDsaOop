// To convert a prefix expression to postfix using stack

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 20

typedef struct
{
    char item[MAX][MAX];
    int top;
} Stack;

void initStack(Stack *stack)
{
    stack->top = -1;
}

void isEmpty(Stack *stack)
{
    if (stack->top == -1)
    {
        printf("The stack is empty");
    }
}

void isFull(Stack *stack)
{
    if (stack->top == MAX - 1)
    {
        printf("Stack is Full");
    }
}

void push(Stack *stack, char value)
{
    if (isFull)
    {
        printf("Sorry can't pop Stack is full");
    }
    strcpy(stack->item[++stack->top], value);
}

char pop(Stack *stack, char result)
{
    if (isEmpty)
    {
        printf("Sorry cant pop Stack is empty");
    }
    strcpy(result, stack->item[stack->top--]);
    return result;
}

void revString(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int isOperator(char ch)
{
    if (ch == '*' || ch == '/' || ch == '+' || ch == '-' || ch == '^')
    {
        return 1;
    }
    return 0;
}

void prefixToPostfix(char prefix[], char postfix[]){
    
}