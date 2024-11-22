#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * factorial(n-1);
    }

}

int main(){
    int x;
    printf("Enter no. for factorial: ");
    scanf("%d",&x);

    printf("the fatorial of %d is %d",x,factorial(x));
}