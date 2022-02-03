/*
    ** 입력 조건 **
    첫째 줄에 정수 N이 주어진다. (1 <= N <= 1,000,000)

    둘째 줄에는 공백으로 구분하여 N개의 정수가 주어진다. 이때 정수는 1보다 크고 1,000,000 이하이다.

    셋째 줄에는 정수 M이 주어진다. (1 <= M <= 100,000)

    넷째 줄에는 공백으로 구분하여 M개의 정수가 주어진다. 이때 정수는 1보다 크고 1,000,000 이하이다.

    ** 출력 조건 **
    첫째 줄에 공백으로 구분하여 각 부품이 존재하면 yes를, 없으면 no를 출력한다.
*/

#include <stdio.h>
#include <stdlib.h>

void FindParts(int* box, int* parts, int box_size, int parts_count){
    int* list = parts;
    for(int i = 0; i < parts_count; i++){
        for(int j = 0; j < box_size; j++){
            if(parts[i] == box[j]){
                list[i] = 1;
            }
        }
    }
    for(int i = 0; i < parts_count; i++){
        if(i != 0)
            printf(" ");
        if(list[i] == 1)
            printf("yes");
        else
            printf("no");
    }
}

int main(){
    int n, m, i;
    scanf("%d", &n);

    int* box = (int*)malloc(sizeof(int) * n);
    for(i = 0; i < n; i++)
        scanf("%d", &box[i]);
    
    scanf("%d", &m);
    int* parts = (int*)malloc(sizeof(int) * m);
    for(i = 0; i < m; i++)
        scanf("%d", &parts[i]);
    
    FindParts(box, parts, n, m);
}