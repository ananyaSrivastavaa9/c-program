#include<stdio.h>
int main() {
    int i = 0;
    do {
        int j = 0;
        do {
            printf(" *");
            j++;
        } while (j <= i);
        printf(" \n");
        i++;
    } while (i<=7);
    return 0;
}