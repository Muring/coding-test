#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void CountSort(int* arr, int size, int* count){
    
    for(int i = 0; i < size; i++){
        //int val = arr[i];
        count[arr[i]] += 1;
    }
    /* 카운트 리스트 확인문   
    for(int i = 0; i < 10; i++)
        printf("%d", count[i]);
    */
    int count_size = _msize(count) / sizeof(int*);
    for(int i = 0 ; i < count_size ; i++){
        //int max = count[i];
		for(int j = 0 ; j < count[i] ; j++){
			printf("%d ", i);
		}		
	}
}

int main(){
    int arr[] = { 7, 5, 9, 0, 3, 1, 6, 2, 9, 1, 4, 8, 0, 5, 2 };
    int size = sizeof(arr) / sizeof(int);
    int i = 0, j = 0;
    //count 리스트 만들기
    int big = arr[0];
    for(i = 1; i < size; i++)
        if(arr[i] > big)
            big = arr[i];
    int* count = (int*)calloc(big + 1, sizeof(int));

    CountSort(arr, size, count);
    
}