#include <stdio.h>

void exchange(int *a, int *b) {
    
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int main(){
    int a = 1;
    int b = 2;
    exchange(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}