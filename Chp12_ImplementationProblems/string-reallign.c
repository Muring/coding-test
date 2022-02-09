/*
    ** 문제 **
    알파벳 대문자와 숫자 (0 ~ 9)로만 구성된 문자열이 입력으로 주어집니다. 이때 모든 알파벳을 
    오름차순으로 정렬하여 이어서 출력한 뒤에, 그 뒤에 모든 숫자를 더한 값을 이어서 출력합니다.
    예를들어 K1KA5CB7이라는 값이 들어오면 ABCKK13을 출력합니다.

    ** 입력 조건 **
    첫째 줄에 하나의 문자열 S가 주어집니다. (1 <= S의 길이 <= 10,000)

    ** 출력 조건 **
    첫째 줄에 문제에서 요구하는 답을 출력합니다.
*/

#include <stdio.h>
#include <stdlib.h>

void SelectionSort(char* arr, int size){
    int min_index;
    char temp;
    
    for(int i = 0; i < size; i++){
        min_index = i;
        for(int j = i + 1; j < size; j++)
            if(arr[min_index] > arr[j])
                min_index = j;
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main(){
    char temp[10000];
    int len;
    scanf("%s%n", temp, &len);
    
    char* arr = (char*)malloc(sizeof(int) * len);
    int loc = 0, sum = 0;
    for(int i = 0; i < len; i++){
        if(temp[i] <= 90 && temp[i] >= 65){
            arr[loc] = temp[i];
            loc++;
        }
        else
            sum += (int)(temp[i] - 48);
    }
    SelectionSort(arr, loc);

    for(int i = 0; i < loc; i++)
        printf("%c", arr[i]);
    printf("%d", sum);
}