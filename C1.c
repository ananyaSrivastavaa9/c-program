#include <stdio.h>
#include<math.h>
int main() {
    int i, j;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%d ", (int)pow(i, j));
        }
        printf("\n");
    }
    return 0;
}
