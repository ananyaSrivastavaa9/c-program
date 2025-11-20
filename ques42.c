#include<stdio.h>
int countodd(int arr[], int n);
int main() {
    int arr[] = {1,6,8,3,7,4,9,3,0,5,3,7,4};
    printf("%d", countodd(arr,13));
    return 0;
}
int countodd(int arr[], int n)
{
    int count = 0;
    for(int i = 0; i<n;i++) {
        if (arr[i] % 2  != 0) {
            count++;
        }
    }
    return count;
}
