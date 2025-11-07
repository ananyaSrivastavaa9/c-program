//write a function to find sum of digits of a number.
#include<stdio.h>
int sum(int n);
int main() {
    sum(1234);
    return 0;
} 
int sum(int n) {
    int sum = 0;
    while (n>0) {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    } 
    printf("%d", sum);
    return sum;
}