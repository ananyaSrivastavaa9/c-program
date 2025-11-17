<<<<<<< HEAD
#include<stdio.h>
int fact(int n);
int main() {
    printf("factorial is %d\n", fact(5));
    return 0;
}

int fact(int n)
{
    if( n== 1) {
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = (factNm1)*n;
    return factN;
}
=======
#include<stdio.h>
int fact(int n);
int main() {
    printf("factorial is %d\n", fact(5));
    return 0;
}

int fact(int n)
{
    if( n== 1) {
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = (factNm1)*n;
    return factN;
}
>>>>>>> 4c0cda1bdd65c1b3a06e980e78f870008171da14
