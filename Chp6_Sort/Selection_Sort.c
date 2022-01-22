#include <stdio.h>

void SelectionSort(int* arr, int size){
    int min_index, temp;
    
    for(int i = 0; i < size; i++){
        min_index = i;
        for(int j = i + 1; j < size; j++)
            if(arr[min_index] > arr[j])
                min_index = j;
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main(){
    int arr[] = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };
    int size = sizeof(arr) / sizeof(int);

    //printf("%d\n", size);
    QuickSort(arr, size);
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    
}