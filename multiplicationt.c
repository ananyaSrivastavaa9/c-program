#include<stdio.h>
int main() {
    int n = 1;
    // for (n = 1; n <= 20; n++) {
    //     printf("2 * %d = %d\n",n, 2*n);
    // }
   
    // while (n <= 20) {
    //     printf("2 * %d = %d\n",n, 2*n);
    //     n = n + 1;
    // }

    do {
        printf("2 * %d = %d\n",n, 2*n);
        n = n + 1;
    } while (n <= 20);
    return 0;
}