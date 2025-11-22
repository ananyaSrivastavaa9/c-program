#include<stdio.h>
void sqnatural(int arr[][10], int n, int m);
int main() {
    int square[2][10];
    sqnatural(square, 2, 10);
    for(int i=0; i<2; i++){
        for(int j=0; j<10; j++){
            printf("%d ", square[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void sqnatural(int arr[][10], int n, int m)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[i][j] = (((i+1)*(j+1))*((i+1)*(j+1)));
        }
    }
}
