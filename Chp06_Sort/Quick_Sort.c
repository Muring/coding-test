#include <stdio.h>

void QuickSort(int* arr, int start, int end){
    if(start >= end)
        return;
    int pivot = start;
    int left = start + 1;
    int right = end;
    int temp;

    while(left <= right){
        while(left <= end && arr[left] <= arr[pivot])
            left += 1;
        while(right > start && arr[right] >= arr[pivot])
            right -= 1;
        if(left > right){
            temp = arr[right];
            arr[right] = arr[pivot];
            arr[pivot] = temp;
        }
        else{
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    QuickSort(arr, start, right - 1);
    QuickSort(arr, right + 1, end);
}


int main(){
    int arr[] = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };
    int size = sizeof(arr) / sizeof(int);

    QuickSort(arr, 0, size - 1);
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}