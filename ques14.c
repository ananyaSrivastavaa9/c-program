#include<stdio.h>
int main() {
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    // for (int i = 0; i<=n; i++){
    //     printf("%d\n", i);
    // }
    // return 0;
    int i = 0;
    while (i<=n) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}