#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *next;
} NODE;

NODE *top = NULL;

void LLTraversal(NODE *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(NODE *top)
{
    return top == NULL;
}

int isFull(NODE *top)
{
    NODE *n = (NODE *)malloc(sizeof(NODE));
    if (n == NULL)
    {
        return 1;
    }
    free(n);
    return 0;
}

//Push function here is like inserting NODE at index 0
NODE *push(NODE *top, int value)
{
    if (isFull(top))
    {
        printf("STACK OVERFLOW\n");
        return top;
    }
    else
    {
        NODE *n = (NODE *)malloc(sizeof(NODE));
        n->data = value;
        n->next = top;
        top = n;
        return top;
    }
}

//Pop is printing value at Index 0 and removing it using free
int pop(NODE **top)
{
    if (isEmpty(*top))
    {
        printf("STACK UNDERFLOW\n");
        return -1;
    }
    else
    {
        NODE *n = *top;
        int x = n->data;
        *top = (*top)->next;
        free(n);
        return x;
    }
}

int main()
{
    top = push(top, 20);
    top = push(top, 30);
    top = push(top, 40);

    int element = pop(&top);
    printf("Popped element is: %d\n", element);

    
    printf("Displaying the complete stack:\n");
    LLTraversal(top);

    return 0;
}