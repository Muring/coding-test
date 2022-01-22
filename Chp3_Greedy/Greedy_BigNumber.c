/*
    ** 입력 조건 **
    배열의 크기 N, 숫자가 더해지는 횟수 M, 연속해서 더해질 수 있는 횟수 K

    첫째 줄에 N(2 <= N <= 1000), M(2 <= N <= 10000), K(2 <= N <= 10000)의 자연수가 주어지며
    각 자연수는 공백으로 구분한다.

    둘째 줄에 N개의 자연수가 주어진다. 각 자연수는 공백으로 구분한다. 단, 각각의 자연수는 1 이상
    10000 이하의 수로 주어진다.

    입력으로 주어지는 K는 항상 M보다 작거나 같다.

    ** 출력 조건 **
    첫째 줄에 동빈이의 큰 수의 법칙에 따라 더해진 답을 출력한다.
*/


#include <stdio.h>

int main(){
    int n, m, k;
    int temp;

    n = 5;
    m = 8;
    k = 3;

    int numbers[5] = {2, 4, 5, 4, 6};

    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(numbers[i] > numbers[j]){
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    int first = numbers[n - 1];
    int second = numbers[n - 2];

    int result = 0;
    int count = (m / (k + 1)) * k;
    count += m % (k + 1);
/*
    while(m != 0){
        for(int i = 0; i < k; i++){
            result += first;
            m -= 1;
            if(m == 0) break;
        }
        result += second;
        m -= 1;
    }
*/
    result += count * first;
    result += (m - count) * second;
    
    printf("%d\n", result);
}