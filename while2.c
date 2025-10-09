#include<stdio.h>
int main() {
    int i;
    printf("enter the value of i\n");
    scanf("%d", &i);
    while (i < 20) {
        printf("%d\n", i);
        i= i+1;
    }
    return 0;
}