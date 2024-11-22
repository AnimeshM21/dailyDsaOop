#include <stdio.h>
#include <stdlib.h>

#define MAX 20

typedef struct
{
    int *items;
    int top;
} STACK;

int isFull(STACK *stack)
{
    if (stack->top == MAX - 1)
    {
        printf("Stack OVERFLOW\n");
        return 1;
    }
    return 0;
}

int isEmpty(STACK *stack)
{
    if (stack->top == -1)
    {
        printf("Stack UNDERFLOW\n");
        return 1;
    }
    return 0;
}

int push(STACK *stack, int item)
{
    if (isFull(stack))
    {
        printf("Cannot push: Stack OVERFLOW\n");
        return -1;
    }
    else
    {
        stack->items[++(stack->top)] = item;
        printf("Successfully pushed %d to the Stack\n", item);
        return 0;
    }
}

int pop(STACK *stack)
{
    if (isEmpty(stack))
    {
        printf("Cannot pop: Stack is EMPTY\n");
        return -1; // Indicate that the stack is empty
    }
    else
    {
        return stack->items[(stack->top)--];
    }
}

void display(STACK *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty, nothing to display\n");
        return;
    }
    printf("STACK:\n");
    for (int i = stack->top; i >= 0; i--)
    {
        printf("%d\n", stack->items[i]);
    }
}

void peek(STACK *stack)
{
    if (!isEmpty(stack))
    {
        printf("The top element of the stack is: %d\n", stack->items[stack->top]);
    }
}

int main()
{
    STACK *stack = (STACK *)malloc(sizeof(STACK));
    stack->items = (int *)malloc(MAX * sizeof(int)); 
    stack->top = -1;

    int choice, input;
    while (1)
    {
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. PEEK\n");
        printf("5. EXIT\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element: ");
            scanf("%d", &input);
            push(stack, input);
            break;
        case 2:
            input = pop(stack);
            if (input != -1)
            {
                printf("Popped element: %d\n", input);
            }
            display(stack);
            break;
        case 3:
            display(stack);
            break;
        case 4:
            peek(stack);
            break;
        case 5:
            return 0;
        default:
            printf("Invalid choice\n");
        }
    }
}