#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int item, int low, int high) {
    if (low > high) {
        return -1;
    }

    int mid = (low + high) / 2;

    if (item == arr[mid]) {
        return mid; 
    } else if (item < arr[mid]) {
        return binarySearch(arr, item, low, mid - 1); 
    } else {
        return binarySearch(arr, item, mid + 1, high);
    }
}

int main() {
    int array[7] = {1, 2, 3, 4, 5, 67, 89};
    int item;
    int low = 0; 
    int high = 6;

    printf("Enter item to search: ");
    scanf("%d", &item);

    int result = binarySearch(array, item, low, high);

    if (result != -1) {
        printf("The item %d is found at index: %d\n", item, result);
    } else {
        printf("The item %d is not found in the array.\n", item);
    }

    return 0;
}