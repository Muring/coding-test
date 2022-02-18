#include <stdio.h>
#include <stdlib.h>
#define INF 1e9;

int getSmallestNode(int n){
    int min_value = INF;
    int index = 0;
    for(int i = 1; i <= n; i++){
        
    }
}

int main(){
    int n, m;
    
    // 노드의 개수, 간선의 개수 입력받기
    scanf("%d %d", &n, &m);

    //시작 노드의 번호 입력받기
    int start;
    scanf("%d", &start);
    printf("start : %d", start);

    int** graph = (int**)malloc(sizeof(int) * n + 1);
    for(int i = 0; i < n; i++)
        graph[i] = (int*)malloc(sizeof(int) * m);

    
    
}