#include<stdio.h>
int main() {
    int value[5];
    printf("enter the value\n");
    for(int i =0; i < 5; i++) {
        scanf("%d", &value[i]);
    }
    return 0;
}