#include <stdio.h>
#define MAX 10
void BinSea(int arr[MAX],int *pFind,int *pFirst, int *pLast){
   
    if (*pFirst>*pLast){
        printf("Not a sorted list");
        return ;
    }
    int pMid;
    pMid  =  MAX/2;
    int pWalk ;
    pWalk = &arr[1];

    while(*pFirst<= *pLast){
        if(*pFind == arr[pMid]){
        }
        else if(*pFind>arr[pMid]){
            *pFirst = arr[pMid+1];
        }else{
            *pLast = arr[pMid-1];
        }
    }


}


int main(){

int myarray;
printf("Enter a 10 digits array:");
scanf("%d",&myarray);

int target;

printf("Enter element to find");
scanf("%d",&target);


int first = 0;
int last = MAX-1;




BinSea(myarray,&target,&first,&last);

}