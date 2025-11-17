<<<<<<< HEAD
#include<stdio.h>
//declaration of a function
int sum(int n);
//call
int main() {
    printf("sum is %d\n", sum(9));
    return 0;
}
//definition
int sum(int n)
{
    if (n == 1) {
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}
=======
#include<stdio.h>
//declaration of a function
int sum(int n);
//call
int main() {
    printf("sum is %d\n", sum(9));
    return 0;
}
//definition
int sum(int n)
{
    if (n == 1) {
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}
>>>>>>> 4c0cda1bdd65c1b3a06e980e78f870008171da14
