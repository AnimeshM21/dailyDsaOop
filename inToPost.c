#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char infix[MAX], postfix[MAX];

typedef struct
{
   int arr[MAX];
   int top;
} STACK;

void push(STACK *stack, int value)
{
   if (stack->top == MAX - 1)
   {
      printf("STACK OVERFLOW\n");
   }
   else
   {
      stack->arr[++(stack->top)] = value;
   }
}

char pop(STACK *stack)
{
   if (stack->top == -1)
   {
      printf("STACK UNDERFLOW\n");
      return -1;
   }
   else
   {
      return stack->arr[(stack->top)--];
   }
}

int isFull(STACK *stack)
{
   if (stack->top == MAX - 1)
   {
      printf("Stack is Full\n");
      return 1;
   }
   return 0;
}

int isEmpty(STACK *stack)
{
   if (stack->top == -1)
   {
      return 1;
   }
   return 0;
}

int stackTop(STACK *stack)
{
   if (stack->top != -1)
   {
      return stack->arr[stack->top];
   }
   return -1;
}

int precedence(char ch)
{
   if (ch == '^')
   {
      return 3;
   }
   else if (ch == '*' || ch == '/')
   {
      return 2;
   }
   else if (ch == '+' || ch == '-')
   {
      return 1;
   }
   else
   {
      return 0;
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

char *inToPost(char *infix)
{
   STACK *sp = (STACK *)malloc(sizeof(STACK));
   sp->top = -1;

   char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
   int i = 0, j = 0;

   while (infix[i] != '\0')
   {
      if (!isOperator(infix[i]))
      {
         postfix[j] = infix[i];
         j++;
         i++;
      }
      else
      {
         if (precedence(infix[i]) > precedence(stackTop(sp)))
         {
            push(sp, infix[i]);
            i++;
         }
         else
         {
            postfix[j] = pop(sp);
            j++;
         }
      }
   }

   while (!isEmpty(sp))
   {
      postfix[j] = pop(sp);
      j++;
   }

   postfix[j] = '\0';

   return postfix;
}

int main()
{
   char exp[] = "a-b+t/6";
   printf("Postfix is: %s\n", inToPost(exp));
   return 0;
}