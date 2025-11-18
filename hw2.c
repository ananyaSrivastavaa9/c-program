#include<stdio.h>
int main() {
    int arr[10];
    int *p1;
    int i;
    printf("enter 10 number");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    p1 = &arr[9];
    printf("array in reverse order");
        for (i = 9; i >= 0; i--) {
            printf("%d", *p1);
            p1--;
        }
    return 0;
}