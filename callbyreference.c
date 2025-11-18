#include<stdio.h>
int square(int*side);
int main() {
    int number = 16;
    square(&number);
    printf("number is %d\n", number);
    return 0;
}

int square(int *side)
{
    *side = (*side) * (*side);
    printf("side is %d\n", *side);
    return 0;
}
