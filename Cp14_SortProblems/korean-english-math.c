/*
    ** 문제 **
    도현이네 반 학생 N명의 이름과 국어, 영어, 수학 점수가 주어집니다. 이때, 다음과 같은 조건으로
    학생의 성적을 정렬하는 프로그램을 작성하세요.
    1. 국어 점수가 감소하는 순서로
    2. 국어 점수가 같으면 영어 점수가 증가하는 순서로
    3. 국어 점수와 영어 점수가 같으면 수학 점수가 감소하는 순서로
    4. 모든 점수가 같으면 이름이 사전 순으로 증가하는 순서로 
    (단, 아스키코드에서 대문자는 소문자보다 작으므로 사전 순으로 앞에 옵니다.)

    ** 입력 조건 **
    첫째 줄에 도현이네 반의 학생 수 N(1 <= N <= 100,000)이 주어집니다.

    둘째 줄부터 한 줄에 하나씩 각 학생의 이름, 국어, 영어, 수학 점수가 공백으로 구분해 주어집니다.

    점수는 1보다 크거나 같고, 100보다 작거나 같은 자연수입니다.

    이름은 알파벳 대소문자로 이루어진 문자열이고, 길이는 10자리를 넘지 않습니다.

    ** 출력 조건 **
    문제에 나와 있는 정렬 기준으로 정렬한 후 첫째 줄부터 N개의 줄에 걸쳐 각 학생의 이름을 출력합니다.
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[20];
    int kor;
    int eng;
    int math;
};

int main(){
    int n;
    scanf("%d", &n);

    struct Student *student = (struct Student*)malloc(sizeof(struct Student) * n);
    
    for(int i = 0; i < n; i++)
        scanf("%s %d %d %d", &student[i].name, &student[i].kor, &student[i].eng, &student[i].math);
    
    struct Student temp;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(student[i].kor < student[j].kor){
                temp = student[i];
                student[i] = student[j];
                student[j] = temp;
            }
        }
    }
    
    
    
    printf("%s %d %d %d\n", student[0].name, student[0].kor, student[0].eng, student[0].math);
    
}