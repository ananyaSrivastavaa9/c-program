#include<stdio.h>
int main() {
    int a = 10;
    int * p;
    p = &a;
    printf("value of a is %d\n", a);
    printf("add of a : %p\n", &a);
    printf("what is inside the p : %p\n", p);
    printf("(*p) value : %d\n", *p);
    return 0;
}