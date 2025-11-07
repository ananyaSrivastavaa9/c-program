#include<stdio.h>
int main() {
    int marks;
    printf("enter marks (0-100) \n");
    scanf("%d", &marks);
    if (marks > 30 && marks <= 100) {
         printf("PASS\n");
     } else if (marks < 30 && marks >= 0) {
         printf("FAIL\n");
     } else {
         printf("wrong marks\n");
     }
    return 0;
}