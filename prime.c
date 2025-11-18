#include<stdio.h>
int main () {
    int n, i, factor = 0;
    printf("enter a number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            factor ++;
        }
    }
    if (factor == 2) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }
    return 0;
}