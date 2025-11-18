#include<stdio.h>
int main() {
    int i, age;
    for (i = 0; i <100; i++) {
        printf("%d\n", i);
        printf("enter your age\n");
        scanf("%d", &age);
        if (age > 10) {
            continue;
        }
        printf("ananya is a good girl\n");
        printf("ananya is 18 years old\n");
        printf("i study in chandigarh university\n");
        printf("i love studying\n");
    }
    return 0;
}