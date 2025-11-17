#include<stdio.h>
int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int*arrptr = arr;
    printf("value at position 3 of the array is %d\n", arr[3]);
    printf("address of first element of the array is %d\n", &arr[0]);
    printf("address of first element of the array is %d\n", arr);
    printf("address of second element of the array is %d\n", &arr[1]);
    printf("address of first element of the array is %d\n", arr + 1);
    arrptr++;
    printf("address of first element of the array is %d\n", *(&arr[0]));
    printf("address of first element of the array is %d\n", *(arr));
    printf("address of second element of the array is %d\n", *(&arr[1]));
    printf("address of first element of the array is %d\n", *(arr + 1));
    return 0;
}