#include<stdio.h>
int main() {
    int i;
    printf("enter the value of i\n");
    scanf("%d", &i);
    for (i; i < 10; i++) {
        printf("%d", i);
    }
    return 0;
}