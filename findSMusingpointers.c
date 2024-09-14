#include <stdio.h>

int main(){
    int i;
    int arr[5] = {567,24,34,44,5};

    int *pSM ;
    int *pLast;
    *pLast = arr[5-1];
    int *pWalk;
    
    for(pSM = arr,pWalk = arr+1;pWalk<=pLast;pWalk++){
        if(*pSM >*pWalk){
            pSM = pWalk;
            
        }
    }
    

    
    printf("%d Smallest ",*pSM);
    return 0;

}
