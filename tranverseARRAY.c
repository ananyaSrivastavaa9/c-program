#include<stdio.h>
int main() {
    int arr[5];
    //input
    int*ptr = &arr[0];
    for(int i = 0; i < 5; i++) {
        printf("enter input: %d \n",i);
        scanf("%d", &arr[i]);
    }
    //output
    for(int i=0; i<5; i++) {
        printf("%d input is: %d \n",i, arr[i]);
    }
    return 0;
}