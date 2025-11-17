#include <stdio.h>
int main() {
    int marks[10], i, n, sum = 0;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Number %d: ", i+1);
        scanf("%d", &marks[i]);   // store input in array
        sum = sum + marks[i];     // add all numbers
    }

    average = (float)sum / n;     // calculate average
    printf("Average = %.2f", average);

    return 0;
}
