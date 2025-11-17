<<<<<<< HEAD
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
=======
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
>>>>>>> 4c0cda1bdd65c1b3a06e980e78f870008171da14
}