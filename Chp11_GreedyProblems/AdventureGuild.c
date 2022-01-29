/*
    ** 문제 **
    한 마을에 모험가가 N명 있습니다. 모험가 길드에서는 N명의 모험가를 대상으로 '공포도'를 측정했는데,
    '공포도'가 높은 모험가는 쉽게 공포를 느껴 위험 상홍에서 제대로 대처할 능력이 떨어집니다.
    모험가 길드장인 동빈이는 모험가 그룹을 안전하게 구성하고자 공포도가 X인 모험가는 반드시 X명 이상으로
    구성한 모험가 그룹에 참여해야 여행을 떠날 수 있도록 규정했습니다. 동비니는 최대 몇 개의 모험가 그룹을
    만들 수 있는지 궁금합니다.
    동빈이를 위해 N명의 모험가에 대한 정보가 주어졌을 때, 여행을 떠날 수 있는 그룹 수의 최댓값을 구하는
    프로그램을 작성하시오.

    ** 입력 조건 **
    첫째 줄에 모험가의 수 N이 주어집니다. (1 <= N <= 100,000)

    둘째 줄에 각 모험가의 공포도의 값을 N 이하의 자연수로 주어지며, 각 자연수는 공백으로 구분합니다.

    ** 출력 조건 **
    여행을 떠날 수 있는 그룹 수의 최댓값을 출력합니다.
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
    int n, size;
    scanf("%d", &n);
    size = n;

    int* fear = (int*)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
        scanf("%d", &fear[i]);

    QuickSort(fear, 0, n - 1);

    int count = 0;  // 현재 그룹에 포함된 모험가의 수
    int result = 0; // 총 그룹의 수
    for(int i = 0; i < n - 1; i++){
        count += 1;
        if(count >= fear[i]){
            result += 1;
            count = 0;
        }
    }
    printf("%d", result);
}