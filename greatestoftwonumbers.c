#include<stdio.h>
int main() {
    int num1, num2;
    printf("enter number 1\n");
    scanf("%d", &num1);
    printf("enter number 2\n");
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    } else if (num2 > num1) {
        printf("%d is greater than %d\n", num2, num1);
    } else {
        printf("both number are equal\n");
    }
    return 0;
}