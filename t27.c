#include<stdio.h>
int main() {
    int arr[5] = {34,23,67,45,22};
    // float a = 1.00;
    // float*ptra = &a;

    // char a = '3';
    // char*ptra = &a;

    // int a = 24;
    // int*ptra = &a;
    
    // printf("%d\n", ptra);
    // printf("%d", ptra+1);

    int *p = arr;
    printf("%d", *(p + 3));

    return 0;
}