<<<<<<< HEAD
#include<stdio.h>
int fib(int n);
int main() {
    fib(6);
    return 0;
}

int fib(int n)
{
    if(n == 0) {
        return 0;
    } if (n == 1) {
        return 1;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    printf("fib of %d : %d\n", n, fibN);
    return fibN;
}
=======
#include<stdio.h>
int fib(int n);
int main() {
    fib(6);
    return 0;
}

int fib(int n)
{
    if(n == 0) {
        return 0;
    } if (n == 1) {
        return 1;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    printf("fib of %d : %d\n", n, fibN);
    return fibN;
}
>>>>>>> 4c0cda1bdd65c1b3a06e980e78f870008171da14
