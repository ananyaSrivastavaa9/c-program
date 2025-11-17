<<<<<<< HEAD
#include<stdio.h>
int main () {
    int num1, num2, num3 ;
    printf("enter number 1\n");
    scanf("%d", &num1);
    printf("enter number 2\n");
    scanf("%d", &num2);
    printf("enter number 3\n");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3) {
        printf("%d is the greatest number\n", num1);
    } 
    else if (num2 > num1 && num2 > num3) {
        printf("%d is the greatest number\n", num2);
    } 
    else if (num3 > num1 && num3 > num2) {
        printf("%d is the greatest number\n", num3);
    } 
    else {
        printf("Two or more numbers are equal and greatest\n");
    }

    return 0;
}

=======
#include<stdio.h>
int main () {
    int num1, num2, num3 ;
    printf("enter number 1\n");
    scanf("%d", &num1);
    printf("enter number 2\n");
    scanf("%d", &num2);
    printf("enter number 3\n");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3) {
        printf("%d is the greatest number\n", num1);
    } 
    else if (num2 > num1 && num2 > num3) {
        printf("%d is the greatest number\n", num2);
    } 
    else if (num3 > num1 && num3 > num2) {
        printf("%d is the greatest number\n", num3);
    } 
    else {
        printf("Two or more numbers are equal and greatest\n");
    }

    return 0;
}

>>>>>>> 4c0cda1bdd65c1b3a06e980e78f870008171da14
