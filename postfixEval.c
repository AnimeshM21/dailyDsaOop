#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 50

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        stack[++top] = value;
    }
}
int pop()
{
    if (top == -1)
    {
        printf("STACK UNDERFLOW");
    }
    else
    {
        return stack[top--];
    }
}

int postfixEval(char exp[])
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (isdigit(exp[i]))
        {
            push(exp[i] - '\0');
        }
        else
        {
            int operand2 = pop();
            int operand1 = pop();

            switch (exp[i])
            {
            case '+':
                push(operand1 + operand2);
                break;
            case '-':
                push(operand1 - operand2);
                break;
            case '*':
                push(operand1 * operand2);
                break;
            case '/':
                push(operand1 / operand2);
                break;
            default:
                printf("Invalid Operator: %c", exp[i]);
                return -1;
            }
        }
    }
    return pop();
}

int main()
{

    char exp[] = "785/65-*-";
    printf("The expression: %s \n", exp);
    printf("Result: %d \n", postfixEval(exp));
    return 0;
}