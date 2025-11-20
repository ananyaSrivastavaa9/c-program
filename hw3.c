#include<stdio.h>
int main() {
    char ch = 'A';
    char *p = &ch;
    printf("alpabets from A to Z\n");
    while (*p <= 'Z') {
        printf("%c\n", *p);
        (*p)++;
    }
    return 0;
}