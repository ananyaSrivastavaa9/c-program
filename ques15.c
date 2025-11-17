<<<<<<< HEAD
#include<stdio.h>
int main() {
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    for (int i = n; i >= 1; i--){
        printf("%d\n", i);
    }
    printf("sum is %d\n", sum);
    return 0;
=======
#include<stdio.h>
int main() {
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    for (int i = n; i >= 1; i--){
        printf("%d\n", i);
    }
    printf("sum is %d\n", sum);
    return 0;
>>>>>>> 4c0cda1bdd65c1b3a06e980e78f870008171da14
}