#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char *items;
    int top;
    int maxSize;
} STACK;

void initStack(STACK *stack, int size) {
    stack->items = (char *)malloc(size * sizeof(char));
    stack->top = -1;
    stack->maxSize = size;
}

int isFull(STACK *stack) {
    return stack->top == stack->maxSize - 1;
}

int isEmpty(STACK *stack) {
    return stack->top == -1;
}

int push(STACK *stack, char item) {
    if (isFull(stack)) {
        return 0;
    } else {
        stack->items[++(stack->top)] = item;
        return 1;
    }
}

char pop(STACK *stack) {
    if (isEmpty(stack)) {
        return '\0';
    } else {
        return stack->items[(stack->top)--];
    }
}

void freeStack(STACK *stack) {
    free(stack->items);
}

int isPalindrome(char* s) {
    STACK mystack;
    initStack(&mystack, strlen(s));

    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
        if (isalnum(s[i])) {
            push(&mystack, tolower(s[i]));
        }
    }

    for (int i = 0; i < len; i++) {
        if (isalnum(s[i])) {
            if (tolower(s[i]) != pop(&mystack)) {
                freeStack(&mystack);
                return 0; 
            }
        }
    }

    freeStack(&mystack);
    return 1; 
}

int main() {
    char str[] = "A man, a plan, a cameo, Zena, Bird, Mocha, Prowel, a rave, Uganda, Wait, a lobola, Argo, Goto, Koser, Ihab, Udall, a revocation, Ebarta, Muscat, eyes, Rehm, a cession, Udella, E-boat, OAS, a mirage, IPBM, a caress, Etam, FCA, a mica, Ojai, Lebowa, Yaeger, a barge, Rab, Alsatian, a mod, Adv, a rps, Ileane, Valeta, Grenada, Hetty, Fayme, REME, HCM, Tsan, Owena, Tamar, Yompur, Isa, Nil, Lorrin, Riksdag, Mona, Ronn, O'Conner, Kirk, an okay, Nafl, Lira, Robi, Rame, FIFA, a need, Rodi, Muharram, Ober, a coma, carri, Hwang, Taos, Salado, Olfe, Camag, Kdar, a hdkf, Jemina, Nadler, Ehud, Rutan, a baster, Ebn, aedegi, a gals, Ira, Tepper, a minim, a gowd, Ulda, Ogawa, TSgt, Callida, Rodl, Ewart, seraphs, Ain, Newgate, Vaden, navettes, Sabah, Swat, Luci, Pam, Arda, pools, a boar, Akira, Gally, CSC, Avalon, a tuba, AAM, Artima, AFB, Selah, wellies, Ronald, BArch, nullos, Uni, an aet, Nadabus, Tyree, Poop, Sennar, CAB, a nanny, Let, Efahan, Dasya, Moon, Ikaria, Nam, Lamar, Egor, Rover, Tanana, Lok...";

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}