/*
    8 x 8 좌표 평면상에서 나이트의 위치가 주어졌을 때 나이트가 이동할 수 있는 경우의 수를 출력하는
    프로그램을 작성하시오. 이때 왕실의 정원에서 행 위치를 표현할 때는 1부터 8로 표현하며,
    열 위치를 표현 할 때는 a부터 h로 표현한다.

    나이트는 L자 형태로만 이동할 수 있다.
    1. 수평으로 두 칸 이동한 뒤에 수직으로 한 칸 이동하기
    2. 수직으로 두 칸 이동한 뒤에 수평으로 한 칸 이동하기

    나이트는 정원 밖으로는 나갈 수 없다.

    ** 입력 조건 **
    첫째 줄에 8 x 8 좌표 평면상에서 현재 나이트가 위치한 곳의 좌표를 나타내는 두 문자로 구성된 문자열이
    입력된다. 입력 문자는 a1처럼 열과 행으로 이뤄진다.

    ** 출력 조건 **
    첫째 줄에 나이트가 이동할 수 있는 경우의 수를 출력하시오.
*/

#include <stdio.h>

int main() {
    int row, count = 0;
    char column;

    scanf("%c%d", &column, &row);
    column -= 96;
    
    int next_row, next_column;

    int steps[8][2] = { {-2, -1}, {-2, 1}, {-1, -2} , {-1, 2} , {1, -2} , {1, 2} , {2, -1} , {2, 1} };

    for (int i = 0; i < 8; i++) {
        next_row = row + steps[i][0];
        next_column = column + steps[i][1];

        if (next_row >= 1 && next_row <= 8 && next_column >= 1 && next_column <= 8)
            count++;
    }
    printf("%d", count);
}