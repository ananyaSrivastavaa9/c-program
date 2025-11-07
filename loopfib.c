#include<stdio.h>
int main() {
    int n,fibN,fibNm1 = 1,fibNm2 = 0;
    printf("enter the value of n\n");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++) {
        printf("%d ",fibNm2);
        fibN = fibNm1 + fibNm2;
        fibNm2 = fibNm1;
        fibNm1 = fibN;
    }
    return 0;
}