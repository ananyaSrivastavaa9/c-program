#include<stdio.h>
float calpercentage(float science, float math, float sanskrit);
int main() {
    float science = 98.00;
    float math = 95.00;
    float sanskrit = 97.00;
    printf("percentage is %.2f", calpercentage(science, math, sanskrit));
    return 0;
}
float calpercentage(float science, float math, float sanskrit)
{
    float calpercentage = ((science + math + sanskrit)/3.00)*100.00;
    return calpercentage;
}
