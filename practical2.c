#include <stdio.h>
void printBinary(unsigned char num) {
    for(int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}
int main() {
    unsigned char num, swapped;

    printf("Enter an unsigned 8-bit number");
    scanf("%hhu", &num);

    swapped = (num << 4) | (num >> 4);

    printf("Original Number %d  Binary", num);
    printBinary(num);

    printf("Swapped Number  %d  Binary", swapped);
    printBinary(swapped);

    return 0;
}
