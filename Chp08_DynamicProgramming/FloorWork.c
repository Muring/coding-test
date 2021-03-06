/*
    가로의 길이가 N, 세로의 길이가 2인 직사각형 형태의 얇은 바닥이 있다. 이 얇은 바닥을
    1 x 2, 2 x 1, 2 x 2의 덮개를 이용해 채우고자 한다.
    이때 바닥을 채우는 모든 경우의 수를 구하는 프로그램을 작성하시오.

    ** 입력 조건 **
    첫재 줄에 N이 주어진다. (1 <= N <= 1,000)

    ** 출력 조건 **
    첫째 줄에 2 x N 크기의 바닥을 채우는 방법의 수를 796,796으로 나눈 나머지를 출력한다.
*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int dp[1001] = { 0 };

    dp[1] = 1;
    dp[2] = 3;
    for(int i = 3; i < n + 1; i++)
        dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 796796;

    printf("%d", dp[n]);
}