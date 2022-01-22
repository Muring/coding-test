/*
    수열을 내림차순으로 정렬하는 프로그램을 만드시오.

    ** 입력 조건 **
    첫째 줄에 수열에 속해있는 수의 개수 N이 주어진다. (1 <= N <= 500)

    둘째 줄 부터 N + 1 번째 줄까지 N개의 수가 입력된다. 수의 범위는 1 이상 100,000 이하의 자연수이다.

    ** 출력 조건 **
    입력으로 주어진 수열이 내림차순으로 정렬된 결과를 공백으로 구분하여 출력한다. 동일한 수의 순서는
    자유롭게 출력해도 괜찮다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void UptoDown(int* arr, int size){
    int i, j;

    for(i = 0; i < size; i++){
        for(j = 0; j < size - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int n;

    scanf("%d", &n);
    int* arr = (int*)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    UptoDown(arr, n);
    for(int i = 0; i < n; i++)
        printf("%d\n", arr[i]);

    free(arr);
    return 0;
}