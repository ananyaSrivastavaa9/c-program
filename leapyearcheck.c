<<<<<<< HEAD
#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year\n", year);
            } else {
                printf("%d is not a leap year\n", year);
            }
        } else {
            printf("%d is a leap year\n", year);
        }
    } else {
        printf("%d is not a leap year\n", year);
    }
    return 0;
}
=======
#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year\n", year);
            } else {
                printf("%d is not a leap year\n", year);
            }
        } else {
            printf("%d is a leap year\n", year);
        }
    } else {
        printf("%d is not a leap year\n", year);
    }
    return 0;
}
>>>>>>> 4c0cda1bdd65c1b3a06e980e78f870008171da14
