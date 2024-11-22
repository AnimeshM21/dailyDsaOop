//  Given an array arr with n elements and a number k, k<n. The task is to delete k elements which are smaller than next element (i.e., we delete arr[i] if arr[i] < arr[i+1]) or become smaller than next because next element is deleted.

#include <stdio.h>
#include <stdlib.h>
void deleteElements(int arr[], int size, int k)
{
    int stack[size];
    int top = -1;
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        while (count < k && stack[top] < arr[i] && top >= 0)
        {
            top--;
            count++;
        }
        stack[++top] = arr[i];
    }
}

int main()
{
    int arr[] = {1, 65, 43, 69, 89, 2, 242, 21};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k;
    printf("Enter how many times you want to remove elements: \n");
    scanf("%d", &k);

    deleteElements(arr, size, k);
    return 0;
}