#include<stdio.h>
int main() {
    int n;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements: %d\n",n);
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("max number is %d\n", max);
    return 0;
}