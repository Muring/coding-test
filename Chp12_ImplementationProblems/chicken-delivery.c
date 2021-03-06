/*
    ** 문제 **
    크기가 N x N인 도시가 있습니다. 도시는 1 x 1 크기의 칸으로 나누어져 있습니다. 도시의 각 칸은 빈칸,
    치킨집, 집 중 하나입니다. 도시의 칸은 (R, c)와 같은 형태로 나타내고, r행 c열 또는 위에서부터 r번째
    칸, 왼쪽에서부터 c번째 칸을 의미합니다. r과 c는 1부터 시작합니다.
    사람들은 "치킨 거리"라는 말을 주로 사용하는데 치킨 거리는 집과 가장 가까운 치킨집 사이의 거리입니다.
    즉, 치킨 거리는 집을 기준으로 정해지며, 가각의 집은 치킨 거리를 가지고 있습니다. 도시의 치킨 거리는
    모든 집의 치킨 거리의 합입니다.
    임의의 두 칸 (r1, c1)과 (r2, c2)사이의 거리는 |r1 - r2| + |c1 + c2|로 구합니다.
    0은 빈칸, 1은 집, 2는 치킨집입니다.
    이 도시에 있는 치킨집은 모두 같은 프렌차이즈입니다. 프렌차이즈 본사에서는 수익을 증가시키기 위해 일부
    치킨집을 폐업시키려고 합니다. 오랜 연구 끝에 이 도시에서 가장 수익을 많이 낼 수 있는 치킨집의 개수는
    최대 M개라는 사실을 알아냈습니다.
    도시에 있는 치킨집 중에서 최대 M개를 고르고, 나머지 치킨집은 모두 폐업시켜야 합니다. 어떻게 고르면,
    도시의 치킨 거리가 가장 작게 될지 구하는 프로그램을 작성하세요.

    ** 입력 조건 **
    - 첫째 줄에 N(2 <=N <= 50)과 M(1 <= M <= 13)이 주어집니다.
    - 둘째 줄부터 N개의 줄에는 도시의 정보가 주어집니다.
    - 도시의 정보는 0, 1, 2로 이루어져 있고, 0은 빈칸, 1은 집, 2는 치킨집을 의미합니다. 집의 개수는
      2N개를 넘지 않으며, 적어도 1개는 존재합니다. 치킨집의 개수는 M보다 크거나 같고, 13보다 작거나
      같습니다.
    
    ** 출력 조건 **
    첫째 줄에 폐업시키지 않을 치킨집을 최대 M개 골랐을 때, 도시의 치킨 거리의 최솟값을 출력합니다.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
}