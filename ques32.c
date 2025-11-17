<<<<<<< HEAD
#include<stdio.h>
void printHW(int count);
int main() {
    printHW(5);
    return 0;
}
void printHW(int count) {
    if (count == 0) {
        return;
    }
    printf("Hello World");
    printHW(count - 1);
=======
#include<stdio.h>
void printHW(int count);
int main() {
    printHW(5);
    return 0;
}
void printHW(int count) {
    if (count == 0) {
        return;
    }
    printf("Hello World");
    printHW(count - 1);
>>>>>>> 4c0cda1bdd65c1b3a06e980e78f870008171da14
}