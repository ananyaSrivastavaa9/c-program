#include<stdio.h>
int main() {
    int age;
    printf("enter age\n");
    scanf("%d", &age);
    if (age >= 18) {
        printf("adult\n");
    } else if (age < 18 && age > 15) {
        printf("teenager\n");
    } else {
        printf("not adult");
    }
    return 0;
}