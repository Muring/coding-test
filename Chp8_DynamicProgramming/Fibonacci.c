#include <stdio.h>
#include <stdlib.h>

int main(){
    int* arr = (int*)calloc(100, sizeof(int));

    arr[0] = 1;
    arr[1] = 1;
    int n = 99;

    for(int i = 3; i < n + 1; i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    for(int i = 0; i < n + 1; i++)
        printf("%d\n", arr[i]);