#include <stdio.h>
#include <stdlib.h>

#define MAX 20

typedef struct{
    int items[MAX];
    int top;
}STACK;

void initStack(STACK *stack){
    stack->top = -1;
}

int isFull(STACK *stack){
    if(stack->top == MAX-1){
        printf("Stack is Full. Get Fucked!!!");
        return 1;
    }
    return 0;
}
int isEmpty(STACK *stack){
    if(stack->top == -1){
        printf("Stack is Empty. Get Fucked!!!");
        return 1;
    }
    return 0;
}

int push(STACK *stack,int item){
    if(isFull(stack)){
        printf("The Stack is full try popping first");
    }else{
        stack->items[++(stack->top)] = item;
        printf("Successfully pushed %d to the Stack \n",item);
    }
}

int pop(STACK *stack){
    if(isEmpty(stack)){
        printf("Sorry but the stack is empty!");
    }else{
        int popped = stack->items[(stack->top)--];
        printf("The popped item is ---%d---!! ",popped);
    }
}

int main() {
    STACK stack;
    initStack(&stack);
    
    
    push(&stack, 7);
    push(&stack, 21);
    push(&stack, 3);
    
    
    // for(int i = 0; i < MAX; i++) {
    //     push(&stack, i);
    // }
    pop(&stack);
    
    isEmpty(&stack);
    isFull(&stack);
    
    printf("the Stack is :%d",stack->item[]);
    return 0;
}