#include<stdio.h>
void printstar(int n){
    for (int i = 0; i <= n; i++) {
        printf("%c", '*');
    }
}
int main() {
    int a, b, c;
    a = 10;
    b = 20;
    c = sum(a+b);
    printstar(10);
    return 0;
}
int sum(int a, int b) {
    return a + b;
}