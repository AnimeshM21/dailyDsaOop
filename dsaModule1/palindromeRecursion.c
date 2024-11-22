#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int leftIndex, int rightIndex) {
    if (leftIndex >= rightIndex) {
        return 1; 
    }
    if (str[leftIndex] == str[rightIndex]) {
        return isPalindrome(str, leftIndex + 1, rightIndex - 1);
    }
    return 0;
}

int main() {
    char str[] = "MalayalaM";

    int len = strlen(str);
    if (isPalindrome(str, 0, len - 1)) {
        printf("The string %s is a palindrome!!\n", str);
    } else {
        printf("The string %s is not a palindrome.\n", str);
    }

    return 0;
}