#include<stdio.h>
int main() {
    char ch;
    printf("enter a character\n");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("Upper Case Character\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("lower case character\n");
    } else {
        printf("not an english alphabet\n");
    }
    return 0;
}