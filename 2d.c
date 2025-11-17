#include<stdio.h>
int main() {
    int marks[2][4] = {{22,35,41,87},{44,89,62,48}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("the value of %d, %d elements are %d\n", i, j, marks[i][j]);
        }
    }
    return 0;
}