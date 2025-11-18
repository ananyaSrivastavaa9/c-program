#include<stdio.h>
int _swap(int *a, int *b);
int main() {
    int a = 3;
    int b = 4;
    _swap(&a,&b);
    printf("value of a is %d and value of b is %d\n", a, b);
    return 0;
}

int _swap(int *a, int *b)
{
    int x = *a;
    *a = *b;
    *b = x;
    return 0;
}
