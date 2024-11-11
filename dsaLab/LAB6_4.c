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

int isEmpty(Stack *stack)
{
    return stack->top == -1;
}

int isFull(Stack *stack)
{
    return stack->top == MAX - 1;
}

void push(Stack *stack, char *value)
{
    if (isFull(stack))
    {
        printf("Stack is full\n");
        return;
    }
    strcpy(stack->item[++stack->top], value);
}

void pop(Stack *stack, char *result)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
        return;
    }
    strcpy(result, stack->item[stack->top--]);
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
    return ch == '*' || ch == '/' || ch == '+' || ch == '-' || ch == '^';
}

void prefixToPostfix(char prefix[], char postfix[])
{
    Stack stack;
    initStack(&stack);

    int length = strlen(prefix);

    revString(prefix);

    for (int i = 0; i < length; i++)
    {
        char ch = prefix[i];

        if (isalnum(ch))
        {
            char operand[2] = {ch, '\0'};
            push(&stack, operand);
        }
        else if (isOperator(ch))
        {
            char op1[MAX], op2[MAX];
            pop(&stack, op1);
            pop(&stack, op2);

            char temp[MAX];
            snprintf(temp, MAX, "%s %s %c", op1, op2, ch);
            push(&stack, temp);
        }
    }

    pop(&stack, postfix);
}

int main()
{
    char prefix[MAX], postfix[MAX];

    printf("Enter your prefix expression to convert to postfix: ");
    fgets(prefix, MAX, stdin);
    prefix[strcspn(prefix, "\n")] = '\0';

    prefixToPostfix(prefix, postfix);

    printf("The postfix expression is: %s\n", postfix);

    return 0;
}