#include<stdio.h>
int main () {
    int num;
    printf("enter a num\n");
    scanf("%d", &num);
    num > 0 ? printf("number is positive\n") : printf("number is negative or zero\n");
    return 0;
}