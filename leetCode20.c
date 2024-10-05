#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char *items;
    int top;
    int maxSize;
} STACK;

void initStack(STACK *stack, int size)
{
    stack->items = (char *)malloc(size * sizeof(char));
    stack->top = -1;
    stack->maxSize = size;
}

int isFull(STACK *stack)
{
    return stack->top == stack->maxSize - 1;
}

int isEmpty(STACK *stack)
{
    return stack->top == -1;
}

int push(STACK *stack, char item)
{
    if (isFull(stack))
    {
        return 0;
    }
    else
    {
        stack->items[++(stack->top)] = item;
        return 1;
    }
}

char pop(STACK *stack)
{
    if (isEmpty(stack))
    {
        return '\0';
    }
    else
    {
        return stack->items[(stack->top)--];
    }
}

void freeStack(STACK *stack)
{
    free(stack->items);
}

int isValid(char *s)
{
    STACK mystack;
    STACK stack2;
    initStack(&mystack, strlen(s));
    initStack(&stack2, strlen(s));
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            push(&mystack, s[i]);
        }
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            push(&stack2, s[i]);
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (stack2.top == mystack.top)
        {
            return 1;
        }
        return 0;
    }
}

int main()
{
    char str[] = "(]";
    if (isValid(str))
    {
        printf("The string is VALID.\n");
    }
    else
    {
        printf("The string is not VALID\n");
    }

    return 0;
}