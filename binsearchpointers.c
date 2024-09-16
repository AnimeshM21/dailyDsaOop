#include <stdio.h>
#define MAX 10
int BinSea(int arr[MAX],int *pFind,int *pFirst, int *pLast){
   
    if (*pFirst>*pLast){
        printf("Not a sorted list");
        return ;
    }
    int pMid;
    pMid  =  (*pFirst+*pLast)/2;
    

    while(*pFirst<= *pLast){
        if(*pFind == arr[pMid]){
            return pMid;
        }
        else if(*pFind>arr[pMid]){
            *pFirst = arr[pMid+1];
        }else{
            *pLast = arr[pMid-1];
        }
    }


}


int main(){

int myarray[MAX] ={1,2,3,4,5,6,7,8,9,10} ;


int target;
printf("Enter element to find");
scanf("%d",&target);


int first = 0;


int last = MAX-1;


int res = BinSea(myarray,&target,&first,&last);
return res;
}