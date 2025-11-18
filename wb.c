#include<stdio.h>
int main() {
    int i;
    printf("enter the  value of i");
    scanf("%d", &i);
    while (1) {
        if (i == 0)
        break;
        i++;
        printf("%d", i);
    }
    return 0;
}