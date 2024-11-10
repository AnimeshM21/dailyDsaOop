#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 20

typedef struct {
    char item[MAX][MAX];
    int top;
} Stack;

void initStack(Stack *stack) {
    stack->top = -1;
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

int isFull(Stack *stack) {
    return stack->top == MAX - 1;
}

void push(Stack *stack, char *value) {
    if (isFull(stack)) {
        printf("Stack is full\n");
        return;
    }
    strcpy(stack->item[++stack->top], value);
}

void pop(Stack *stack, char *result) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    strcpy(result, stack->item[stack->top--]);
}

void revString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int isOperator(char ch) {
    return ch == '*' || ch == '/' || ch == '+' || ch == '-' || ch == '^';
}

void postfixToInfix(char postfix[], char infix[]) {
    Stack stack;
    initStack(&stack);

    int length = strlen(postfix);

    for (int i = 0; i < length; i++) {
        char ch = postfix[i];

        if (isalnum(ch)) {
            char operand[2] = {ch, '\0'};
            push(&stack, operand);
        } else if (isOperator(ch)) {
            char op1[MAX], op2[MAX];
            pop(&stack, op1);
            pop(&stack, op2);

            char temp[MAX];
            snprintf(temp, MAX, "%s %c %s", op1,ch,op2);
            push(&stack, temp);
        }
    }

    pop(&stack, infix);
}

int main() {
    char postfix[MAX], infix[MAX];

    printf("Enter your postfix expression to convert to infix: ");
    fgets(postfix, MAX, stdin);
    postfix[strcspn(postfix, "\n")] = '\0';

    postfixToInfix(postfix, infix);

    printf("The infix expression is: %s\n", infix);

    return 0;
}