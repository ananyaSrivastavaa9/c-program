#include<stdio.h>
int main() {
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    printf("multiplication table of %d is\n", num);
    for (int i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }
    return 0;
}