<<<<<<< HEAD
#include<stdio.h>
void namaste();
void bonjour();
int main() {
    printf("enter i for namaste and f for bonjour");
    char ch;
    scanf("%c", &ch);
    if (ch == 'i') {
        namaste();
    } else {
        bonjour();
    }
    return 0;
}
void namaste() {
    printf("Namaste");
}
void bonjour() {
    printf("Bonjour");
=======
#include<stdio.h>
void namaste();
void bonjour();
int main() {
    printf("enter i for namaste and f for bonjour");
    char ch;
    scanf("%c", &ch);
    if (ch == 'i') {
        namaste();
    } else {
        bonjour();
    }
    return 0;
}
void namaste() {
    printf("Namaste");
}
void bonjour() {
    printf("Bonjour");
>>>>>>> 4c0cda1bdd65c1b3a06e980e78f870008171da14
}