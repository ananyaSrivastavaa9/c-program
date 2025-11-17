#include<stdio.h>
int main() {
    int marks[4] = {33,67,49,65};
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("enter the value of %d element of the array\n", i);
    //     scanf("%d", &marks[i]);
    // }
    for (int i = 0; i < 4; i++)
    {
        printf("the elements of %d is %d\n", i, marks[i]);
    }
    return 0;
}