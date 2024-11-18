#include <stdio.h>
#include <stdlib.h>

int multi(int m, int n){
    if(m == 0 || n == 0){
        return 0;
    }else if(n == 1){
        return m;
    }else{
        return (multi(m,n-1) + m);
}
}

int main(){
    int x,y;

    printf("Enter the numbers for multiplication: ");
    scanf("%d %d", &x,&y);

    printf("The multiplication of %d and %d: %d ",x,y,multi(x,y));
}