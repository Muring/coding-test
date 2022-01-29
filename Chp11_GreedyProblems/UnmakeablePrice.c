/*
    ** 문제 **
    동네 편의점의 주인인 동빈이는 N개의 동전을 가지고 있습니다. 이때 N개의 동전을 이용하여 만들 수 없는
    양의 정수 금액 중 최솟값을 구하는 프로그램을 작성하세요.

    ex) N = 5, 각 동전이 각각 3원, 2원, 1원, 1원, 9원짜리 동전이라고 가정
        이때 동빈이가 만들 수 없는 양의 정수 금액중 최솟 값은 8원

        N = 3, 각 동전이 각각 3원, 5원, 7원짜리 동전이라고 가정
        이때 동빈이가 만들 수 없는 양의 정수 금액 중 최솟값은 1원

    ** 입력 조건 **
    첫째 줄에는 동전의 개수를 나타내는 양의 정수 N이 주어집니다. (1 <= N <= 1,000)

    둘째 줄에는 각 동전의 화폐 단위를 나타내는 N개의 자연수가 주어지며, 각 자연수는 공백으로 구분
    이때, 각 화페의 단위는 1,000,000 이하의 자연수

    ** 출력 조건 **
    첫째 줄에 주어진 동전들로 만들 수 없는 양의 정수 금액 중 최솟값을 출력
    ex) 5
        3 2 1 1 9 -> 출력: 8
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int n;
    scanf("%d", &n);

    int* coin = (int*)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
        scanf("%d", &coin[i]);

    QuickSort(coin, 0, n - 1);

    int target = 1;

    for(int i = 0; i < n; i++){
        if(target < coin[i])
            break;
        target += coin[i];
    }
    printf("%d", target);
}