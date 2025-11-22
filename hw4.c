#include<stdio.h>
int main() {
    int n, x;
    printf("enter the value of n\n");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("enter the value of x\n");
    scanf("%d", &x);
    arr[n] = x;
    n = n+1;
    printf("array after insertion\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}