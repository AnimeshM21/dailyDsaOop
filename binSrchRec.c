#include <stdio.h>

int BinSearch(int item,int a[],int low,int high){
int mid;
if (low>high){
    return -1;
}
mid = (high + low)/2;
if(item ==a[mid]){
    return mid;
}
else if (item <a[mid]){
    high = mid -1;
    BinSearch(item,a,low,high);
}else if(item >a[mid]){
    low = mid + 1;
    BinSearch(item,a,low,high);
}
}

int main(){
    int a[5] = {1,2,3,4,5};
    int item;
    printf("Enter the item to search: ");
    scanf("%d",&item);
    int result = BinSearch(item,a,0,5);
    if(result == -1){
        printf("Item not found\n");
    }else{
        printf("Item found at index %d\n",result);
    }
}
