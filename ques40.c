#include<stdio.h>
void solve(int a, int b, int *sum, int *product, int *avg);
int main() {
    int a = 4;
    int b = 6;
    int sum, product, avg;
    solve(a, b, &sum, &product, &avg);
    printf("sum = %d, product = %d, avg = %d\n", sum, product, avg);
}
void solve(int a, int b, int *sum, int *product, int *avg)
{
    *sum = a + b;
    *product = a*b;
    *avg = (a+b)/2;
}
