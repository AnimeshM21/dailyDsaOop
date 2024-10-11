#include <stdio.h>

int factorial(int n){

int x,y,result;
if(n==0){
    return 1;

}else{
    x = n-1;
    y = factorial(x);
    result = n*y;
    return result;

}


}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d\n",n,factorial(n));
    return 0;
}