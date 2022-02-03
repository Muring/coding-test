/*
    학생의 이름과 성적 정보가 주어졌을 때 성적이 낮은 순서대로 학생의 이름을 출력하는 프로그램을 작성하시오.

    ** 입력 조건 **
    첫 번째 줄에 학생의 수 N이 입력된다. (1 <= N <= 100,000)

    두 번째 줄부터 N + 1 번째 줄에는 학생의 이름을 나타내는 문자열 A와 학생의 성적을 나타내는 정수 B가
    공백으로 구분되어 입력된다. 문자열 A의 길이와 학생의 성적은 100 이하의 자연수이다.

    ** 출력 조건 **
    모든 학생의 이름을 성적이 낮은 순서대로 출력한다. 성적이 동일한 학생들의 순서는 자유롭게 출력해도 괜찮다.
*/


#include <stdio.h>
#include <stdlib.h>

void Sort(char** name, int* score, int size){
    int i, j, temp;
    int* list = (int*)malloc(sizeof(int) * size);
    // 리스트에 점수 배열 번호 입력
    for(i = 0; i < size; i++)
        list[i] = i;
    
    // 점수별 정렬을 리스트로 정렬
    for(i = 0; i < size; i++){
        for(j = 0; j < size - 1; j++){
            if(score[list[j]] > score[list[j + 1]]){
                temp = list[j];
                list[j] = j + 1;
                list[j + 1] = temp;
            }
        }
    }
    
    for(i = 0; i < size; i++){
        if(i >= 1)
            printf(" ");
        printf("%s", name[list[i]]);
    }
}

int main(){
    int n;

    scanf("%d", &n);
    char** name = (char**)malloc(sizeof(char) * n);
    for(int i = 0; i < n; i++)
        name[i] = (char*)malloc(sizeof(char) * 3);
    int* score = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
        scanf("%s %d", name[i], &score[i]);
    
    Sort(name, score, n);

    free(name);
    free(score);
    return 0;
}