#include<stdio.h>
int sum(int a, int b) {
    return a + b;
}
int main() {
    int a=10,b,c;
    a = 10;
    b = 20;
    c = sum(a,b);
    printf("sum is %d\n", c);
}