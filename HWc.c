// write a function to print "hot" or "cold" depend on the temperature user enters.
#include<stdio.h>
void checktemp(int temp);
int main(){
    int temp;
    printf("enter the temp\n");
    scanf("%d", &temp);
    checktemp(temp);
    return 0;
}
void checktemp(int temp)
{
    if(temp > 30) {
        printf("HOT\n");
    } else {
        printf("COLD\n");
    }
}
