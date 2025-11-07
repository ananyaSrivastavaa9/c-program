// write a function to find square root of a number.
#include<stdio.h>
int sqroot(int n);
int main() {
    int result = sqroot(4);
    printf("%d\n", result);
    return 0;
}
int sqroot(int n)
{
    int i = 1;
    while (i*i <= n) {
        i++;
    }
    return i-1;
}
