#include<stdio.h>
int main() {
    int a;
    int b;
    int *p1;
    int *p2;
    printf("enter two numbers\n");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (*p1 > *p2) {
        printf("maximum is %d\n", *p1);
    } else {
        printf("maximum is %d\n", *p2);
    }
    return 0;
}