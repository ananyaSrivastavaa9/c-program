#include<stdio.h>
//declaration of a function
int sum(int n);
//call
int main() {
    printf("sum is %d\n", sum(9));
    return 0;
}
//definition
int sum(int n)
{
    if (n == 1) {
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}
