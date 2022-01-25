/*
    개미 전사가 정찰병에게 들키지 않고 식량창고를 약탈하기 위해서는 최소한 한 칸 이상 떨어진 식량창고를
    약탈해야 한다. 얻을 수 있는 식량의 최댓값을 구하는 프로그램을 작성하시오.
    
    ** 입력 조건 **
    첫째 줄에 식량창고의 개수 N이 주어진다. (3 <= N <= 100)

    둘째 줄에 공백으로 구분되어 각 식량창고에 저장된 식량의 개수 K가 주어진다. (0 <= K <= 1,000)

    ** 출력 조건 **
    첫째 줄에 개미 전사가 얻을 수 있는 식량의 최댓값을 출력하시오.
*/

#include <stdio.h>
#include <stdlib.h>



int main(){
    int n;
    scanf("%d", &n);

    int* arr = (int*)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int d[100];

    d[0] = arr[0];
    d[1] = (arr[0] > arr[1] ? arr[0] : arr[1]);

    for(int i = 2; i < n; i++)
        d[i] = (d[i - 1] > d[i - 2] + arr[i] ? d[i - 1] : d[i - 2] + arr[i]);
    
    printf("%d", d[n - 1]);
}