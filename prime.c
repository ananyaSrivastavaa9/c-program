#include<stdio.h>
int main () {
    int num;
    printf("enter a number\n");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is prime number\n", num);
    } else {
        printf("%d is not prime number\n", num);
    }
    return 0;
}