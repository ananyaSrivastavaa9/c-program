#include<stdio.h>
int main() {
    int length,width;
    printf("enter length\n");
    scanf("%d", &length);
    printf("enter width\n");
    scanf("%d", &width);
    printf("perimeter of rectangle is %d", 2*length*width);
    return 0;
}