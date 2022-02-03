#include <stdio.h>

void InsertSort(int* arr, int size){
    int temp;

    for(int i = 1; i < size; i++){
        for(int j = i; j >= 1; j--){
            if(arr[j] < arr[j - 1]){
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else
                break;
        }
    }
}

int main(){
    int arr[] = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };
    int size = sizeof(arr) / sizeof(int);

    InsertSort(arr, size);
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}