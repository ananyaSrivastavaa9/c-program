<<<<<<< HEAD
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
=======
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
>>>>>>> 4c0cda1bdd65c1b3a06e980e78f870008171da14
}