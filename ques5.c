#include<stdio.h>
int main() {
    int x;
    printf("enter a number\n");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    return 0;
}