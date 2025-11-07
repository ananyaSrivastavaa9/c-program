#include<stdio.h>
int main() {
    int sum = 0;
    for (int n = 1; n <= 10; n++) {
        sum += n;
    }
    printf("%d", sum);
    return 0;
}
