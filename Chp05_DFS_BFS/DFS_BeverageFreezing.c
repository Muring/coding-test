/*
    N x M 크기의 얼음 틀이 잇다. 구멍이 뚫려 있는 부분은 0, 칸막이가 존재하는 부분은 1로 표시한다.
    구멍이 뚫려 있는 부분끼리 상, 하, 좌, 우로 붙어 있는 경우 서로 연결되어 있는 것으로 간주한다.
    이때 얼음 틀의 모양이 주어졌을 때 생성되는 총 아이스크림의 개수를 구하는 프로그램을 작성하시오.

    ** 입력 조건**
    첫 번째 줄에 얼음 틀의 세로 길이 N과 가로 길이 M이 주어진다. (1 <= N,M <= 1000)

    두 번째 줄부터 N + 1번째 줄 까지 얼음 틀의 형태가 주어진다.

    이때 구멍이 뚫려있는 부분은 0, 그렇지 않은 부분은 1이다.

    ** 출력 조건 **
    한 번에 만들 수 있는 아이스크림의 개수를 출력한다.
*/

#include <stdio.h>
#include <stdlib.h> 

int dfs(int** graph, int x, int y, int n, int m) {
    if(x <= -1 || x >= n || y <= -1 || y >= m)
        return 0;
    if(graph[x][y] == 0){
        
        graph[x][y] = 1;
        dfs(graph, x - 1, y, n, m);
        dfs(graph, x + 1, y, n, m);
        dfs(graph, x, y - 1, n, m);
        dfs(graph, x, y + 1, n, m);

        return 1;
    }
    return 0;
}

int main(){
    int n, m;
    // 그래프의 크기 입력 받기
    scanf("%d %d", &n, &m);

    char arr[100] = "";
    // 그래프 동적할당 및 그래프 값 초기화
    int** graph = (int**)calloc(n, sizeof(int*));
    for(int i = 0; i < n ; i++){
        graph[i] = (int*)calloc(m, sizeof(int*));
        scanf("%s", arr);
        for(int j = 0; j < m; j++)
            graph[i][j] = (int)arr[j] - 48;
    }
    /* 그래프 초기화 잘 됐는지 확인
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            printf("%d", graph[i][j]);
        printf("\n");
    }
    */
    
    int result = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(dfs(graph, i, j, n, m) == 1)
                result += 1;
        
    printf("%d", result);
}