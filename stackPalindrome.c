#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

char stack[MAX];
int top = -1;

void push(char val){
    stack[++top] = val;
}
char pop(){
    return stack[top--];

}

int Palindrome(char *str){
    int len = strlen(str);
    for(int i=0;i<=len-1;i++){
        push(str[i]);
    }
    for(int i=0;i<=len-1;i++){
        if(str[i]!=pop()){
            return 0;
        }
        return 1;
    }


}

int main(){
    char str[MAX];
    printf("Enter a String");
    scanf("%s",&str);
    if(Palindrome(str)){
        printf("This is a Palidrome");

    }
    else{
        printf("this is not a palindrome");
    }
}