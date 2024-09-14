#include <stdio.h>

int main(){
    int **table;

    table[0] = (int **) calloc(4,sizeof(int));
    table[1] = (int **) calloc(3,sizeof(int));
    table[2] = (int **) calloc(3,sizeof(int));
    table[3] = (int **) calloc(7,sizeof(int));
    table[4] = (int **) calloc(5,sizeof(int));


    table[0] = {1,2,3,4};
    table[1] = {1,2,3};
    table[2] = {1,2,31};
    table[3] = {1,2,3,4,5,6,7};
    table[4] = {1,2,3,4,5};

    printf()
}