#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int Stack[MAX];
int top= -1;

void push(int val){

Stack[++top] = val;
}

int pop(){
    return Stack[top--];

}

void decToBin(int n){

while(n>0){
    int rem = n%2;
    push(rem);
    n = n/2;

}
printf("Decimal to Binary:");
while(top>=0){
    printf("%d",pop());
}

}

int main(){
    int decimal= 7;
    printf("Decimal to Binary conversion is:");
    decToBin(decimal);

}



