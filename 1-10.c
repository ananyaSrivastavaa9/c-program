#include<stdio.h>
int main() {
    int n = 1;
    // for (n = 1; n <= 10; n++) {
    //     printf("%d\n", n);
    // }

    // while (n <= 10) {
    //     printf("%d\n", n);
    //     n = n+1;
    // }

    do {
        printf("%d\n", n);
        n = n+1;
    } while (n <= 10);
    return 0;
}