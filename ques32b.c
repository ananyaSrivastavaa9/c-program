<<<<<<< HEAD
#include<stdio.h>
float conversion(float celsius);
int main() {
    float far = conversion(32);
    printf("far : %f", far);
    return 0;
}

float conversion(float celsius)
{
    float far = (celsius * (9.0/5.0))+32;
    return far;
}
=======
#include<stdio.h>
float conversion(float celsius);
int main() {
    float far = conversion(32);
    printf("far : %f", far);
    return 0;
}

float conversion(float celsius)
{
    float far = (celsius * (9.0/5.0))+32;
    return far;
}
>>>>>>> 4c0cda1bdd65c1b3a06e980e78f870008171da14
