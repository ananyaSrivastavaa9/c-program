#include<stdio.h>
int main() {
    // float price = 100.00;
    // float*ptr = &price;
    // float**pptr = &ptr;
    
    int i = 10;
    int*ptr = &i;
    int**pptr = &ptr;
    printf("%d\n", **pptr);
    return 0; 
}