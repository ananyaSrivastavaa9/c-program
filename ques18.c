#include<stdio.h>
int main() {
    int num;
    do {
        printf("enter a number\n");
        scanf("%d", &num);
        if (num % 7 == 0) {
            break;
        }
    } while (1);
    return 0;
}