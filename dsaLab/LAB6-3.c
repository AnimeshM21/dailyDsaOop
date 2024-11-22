// Implement two stacks in an array.

#include <stdio.h>
#include <stdlib.h>
#define MAX 40

int arr[MAX];

typedef struct
{
    int arr[MAX];
    int top1;
    int top2;
} twoStack;

initStack(twoStack *stack)
{
    stack->top1 = -1;
    stack->top2 = MAX;
}

void push1(twoStack *stack, int value)
{
    if (stack->top1 < stack->top2 - 1)
    {
        stack->arr[++stack->top1] = value;
    }
    else
    {
        printf("Stack-1 Overflow");
    }
}

void push2(twoStack *stack, int value)
{
    if (stack->top1 < stack->top2 - 1)
    {
        stack->arr[--stack->top2] = value;
    }
    else
    {
        printf("Stack-2 Overflow");
    }
}

int pop1(twoStack *stack)
{
    if (stack->top1 == -1)
    {
        printf("Stack-1 is EMPTY");
        return -1;
    }
    int result = stack->arr[stack->top1];
    stack->top1--;
    return result;
}

int pop2(twoStack *stack)
{
    if (stack->top2 == MAX)
    {
        printf("Stack-2 is EMPTY");
        return -1;
    }
    int result = stack->arr[stack->top2];
    stack->top2++;
    return result;
}

void display1(twoStack *stack)
{
    if (stack->top1 == -1)
    {
        printf("Stack-1 is EMPTY");
        return;
    }
    printf("STACK-1 Elements: \n");
    for (int i = 0; i <= stack->top1; i++){
        printf("%d", stack->arr[i]);
}
printf("\n");
}

void display2(twoStack *stack)
{
    if (stack->top2 == MAX)
    {
        printf("Stack-2 is EMPTY");
        return;
    }
   
    printf("STACK-2 Elements: ");
    for (int i = MAX - 1; i <= stack->top2; i--){
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}


int main(){
    twoStack stack;
    initStack(&stack);

    push1(&stack,10);
    push1(&stack,20);
    push2(&stack,30);
    push2(&stack,40);

    printf("AFter pushing elements");
    display1(&stack);
    display2(&stack);

    printf("Popped element from stack-1: %d \n",pop1(&stack));
    printf("Popped element from stack-2: %d \n",pop2(&stack));

    printf("After poping elements");
    display1(&stack);
    display2(&stack);

    return 0;
}