#include <stdio.h>
#include <stdlib.h>
int main(){
    int rowN, colN;
    int **table;

    printf("enter no of rows:");
    scanf("%d",&rowN);

    table = (int**)calloc(rowN+1,sizeof(int*));
    for(int i=0;i<rowN;i++){
        printf("Enter no. of elements in each Row:");
        scanf("%d",&colN);
        table[i] = (int*)calloc(colN+1,sizeof(int));
        for(int j=0;j<colN;j++){
            scanf("%d",&table[i][j]);
        }
        table[i][0] = colN;
        printf("The size of row[%d] = %d elements",i+1,table[i][0]);
    }

    table[rowN] = NULL;
    for (int i = 0; i < rowN; i++)
        {
            printf("Displaying %d row elements\n" , i+1);
            for (int j = 0; j < *table[i]; j++)
            {
                printf("%d\t" , table[i][j]);
            }
            printf("\n");
            
        }
}