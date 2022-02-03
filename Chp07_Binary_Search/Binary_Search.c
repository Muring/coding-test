#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int* arr, int target, int left, int right){
    if(left > right)
        return -1;

    int mid = (left + right) / 2;
    if(arr[mid] == target)
        return mid;
    else if(arr[mid] > target)
        return BinarySearch(arr, target, left, mid - 1);
    else
        return BinarySearch(arr, target, mid + 1, right);

}

int main(){
    int target;
    int arr[10] = {1, 2, 5, 8, 10, 16, 20, 21, 27, 30};
    int size = sizeof(arr) / sizeof(int);

    printf("Enter a number you want to find: ");
    scanf("%d", &target);
    
    int result = BinarySearch(arr, target, 0, size - 1);
    if(arr[result] == target)
        printf("Target found\nTarget is %d\n", arr[result]);
    else
        printf("Target not found\n");

}