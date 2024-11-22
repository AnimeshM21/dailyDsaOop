#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

typedef struct
{
    int top;
    char *arr;
} STACK;

int push(STACK *stack, char val)
{
    if (stack->top == MAX - 1)
    {
        printf("Stack is FULL\n");
        return 0;
    }
    else
    {
        stack->arr[++(stack->top)] = val;
        return 1;
    }
}

char pop(STACK *stack)
{
    if (stack->top == -1)
    {
        printf("STACK UNDERFLOW\n");
        return '\0';
    }
    else
    {
        return stack->arr[(stack->top)--];
    }
}

int isPalindrome(STACK *stack, char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        push(stack, str[i]);
    }

    for (int i = 0; i < len; i++)
    {
        if (str[i] != pop(stack))
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char str[MAX];
    STACK *stack = (STACK *)malloc(sizeof(STACK));
    stack->arr = (char *)malloc(MAX * sizeof(char));
    stack->top = -1;

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(stack, str))
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}