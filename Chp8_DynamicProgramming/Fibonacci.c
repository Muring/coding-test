#include <stdio.h>
#include <stdlib.h>

int main(){
    float* arr = (float*)calloc(101, sizeof(float));

    arr[0] = 1;
    arr[1] = 1;
    int n = 99;

    for(int i = 3; i < n + 1; i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    for(int i = 0; i < n + 1; i++)
        printf("%.f\n", arr[i]);
}