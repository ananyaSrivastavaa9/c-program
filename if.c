#include<stdio.h>
int main () {
    int age;
    printf("enter age\n");
    scanf("%d", &age);
    if (age > 18) {
        printf("adult\n");
        printf("they can drive\n");
        printf("they can vote\n");
    } else {
        printf("not adult\n");
        return 0;
    }
}