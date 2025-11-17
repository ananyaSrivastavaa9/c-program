<<<<<<< HEAD
#include<stdio.h>
#include<math.h>
float AreaSquare(float side);
float AreaCircle(float radius);
float AreaRectangle (float a, float b);

int main() {
    float radius = 5.00;
    printf("area is %f\n", AreaCircle(radius));
    return 0;
}
float AreaSquare(float side)
{
    return side*side;
}

float AreaCircle(float radius)
{
    return 3.14*radius*radius;
}

float AreaRectangle(float a, float b)
{
    return a*b;
}
=======
#include<stdio.h>
#include<math.h>
float AreaSquare(float side);
float AreaCircle(float radius);
float AreaRectangle (float a, float b);

int main() {
    float radius = 5.00;
    printf("area is %f\n", AreaCircle(radius));
    return 0;
}
float AreaSquare(float side)
{
    return side*side;
}

float AreaCircle(float radius)
{
    return 3.14*radius*radius;
}

float AreaRectangle(float a, float b)
{
    return a*b;
}
>>>>>>> 4c0cda1bdd65c1b3a06e980e78f870008171da14
