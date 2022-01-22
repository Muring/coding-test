/*
    ** 입력 조건 **
    첫 번째 줄에 N, K가 공백으로 구분되어 입력된다. (1 <= N <= 100,000, 0 <= K <= N)

    두 번째 줄에 배열 A의 원소들이 공백으로 구분되어 입력된다. 모든 원소는 10,000,000보다 작은 자연수이다.

    세 번째 줄에 배열 B의 원소들이 공백으로 구분되어 입력된다. 모든 원소는 10,000,000보다 작은 자연수이다.

    ** 출력 조건 **
    최대 K번의 바꿔치기 연산을 수행하여 만들 수 있는 배열 A의 모든 원소의 합의 최댓값을 구하여라.
*/

#include <stdio.h>
#include <stdlib.h>

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
    int n, k, i;
    scanf("%d %d", &n, &k);
    int temp;
    int* arr1 = (int*)malloc(sizeof(int) * n);
    int* arr2 = (int*)malloc(sizeof(int) * n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr1[i]);
    for(i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    QuickSort(arr1, 0, n - 1);
    QuickSort(arr2, 0, n - 1);

    for(i = 0; i < k; i++){
        temp = arr1[i];
        arr1[i] = arr2[n - 1 - i];
        arr2[n - 1 - i] = temp;
    }
    
    int sum = 0;
    for(i = 0; i < n; i++)
        sum += arr1[i];
    printf("%d", sum);
}