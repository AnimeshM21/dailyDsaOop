#include <stdio.h>

int main(){

    typedef enum {Jan, Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec} MONTHS;

    MONTHS time;

    switch (time){
        case Jan:
            printf("It is January");
            break;
        case Feb:
            printf("It is February");
            break;
        case Mar:
            printf("It is March");
            break;
        case Apr:
            printf("It is April");
            break;
        case May:
            printf("It is May");
            break;
        case Jun:
            printf("It is June");
            break;
        case Jul:
            printf("It is July");
            break;
        case Aug:
            printf("It is August");
            break;
        case Sep:
            printf("It is September");
            break;
        case Oct:
            printf("It is October");
            break;
        case Nov:
            printf("It is November");
            break;
        case Dec:
            printf("It is December");
            break;

    }



}