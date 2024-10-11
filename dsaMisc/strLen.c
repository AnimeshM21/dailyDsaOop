#include <stdio.h>

int lenStr(char str[]){
    int length = 0;
    while(str[length] != '\0'){
        length++;
        lenStr(str+1);
    }
    return length;
}

int main(){
    char str[15];
    printf("Enter a string: ");
    scanf("%s",str);
    printf("Length of the string is %d\n",lenStr(str));
}

