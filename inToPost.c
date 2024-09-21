#include <stdio.h>
#include <stdlib.h.
#include <string.h>
define MAX 100

    char stack[MAX];
char infix[MAX], postfix[MAX];
int top = -1;

void inToPost()
{
   int i, j = 0;
   char symbol, next;
   for (int i = 0; i < strlen(); i++)
   {

      symbol = infix[i];
      switch (symbol)
      {
      case '(':
         push(symbol);
         break;
      case ')':
         while (next = pop() != '(')
         {
            postfix[j++] = next;
         }
      case '+':
      case '-':
      case '*':
      case '/':
      case '^':
         while (!isEmpty && precedence(stack[top]) >= precedence(symbol))
            ;
      case default:
         postfix[j++] = symbol;
      }
   }
}

int main()
{
   printf("Enter the prefix expression \n");
   gets(infix);

   inToPost();
}