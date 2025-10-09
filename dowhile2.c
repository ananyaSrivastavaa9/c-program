#include<stdio.h>
int main() {
int i;
printf("enter the value of i\n");
scanf("%d", &i);
do {
    i = i+1;
    printf("%d\n", i);
} while (i < 20);
return 0;
}
