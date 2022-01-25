/*
    X가 5로 나누어 떨어지면, 5로 나눈다.
    X가 3으로 나누어떨어지면, 3으로 나눈다.
    X가 2로 나누어 떨어지면, 2로 나눈다.
    X에서 1을 뺀다.
    
    ** 입력 조건 **
    첫째 줄에 정수 X가 주어진다. (1 <= X <= 30,000)

    ** 출력 조건 **
    첫째 줄에 연산을 하는 횟수의 최솟값을 출력한다.
*/

#include <stdio.h>

int main(){
    int x, count = 0;
    scanf("%d", &x);

    int* arr = (int*)calloc(x, sizeof(int));

    for(int i = 2; i < x + 1; i++){
        arr[i] = arr[i - 1] + 1;

        if(i % 2 == 0)
            arr[i] = 
    }
}