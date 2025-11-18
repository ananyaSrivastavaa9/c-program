#include<stdio.h>
int main() {
    int a = 55;
    int*ptr;
    ptr = &a;
    printf("value of a is %d\n", a);
    printf("add of a is %p\n", &a);
    printf("what is ptr : %p\n", ptr);
    printf("value of (*ptr) is %d\n", *ptr);
 
    return 0;
}