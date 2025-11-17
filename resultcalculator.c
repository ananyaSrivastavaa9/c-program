<<<<<<< HEAD
#include<stdio.h>
int main() {
    int m1, m2, m3;
    int total;
float avg;
char grade;

//Input marks
printf("enter marks of m1\n");
scanf("%d", &m1);
printf("enter marks of m2\n");
scanf("%d", &m2);
printf("enter marks of m3\n");
scanf("%d", &m3);

//calculate grade
if (avg >= 90) {
    grade = 'A';
} else if (avg >= 75) {
    grade = 'B';
} else if (avg >= 50) {
    grade = 'C';
} else {
    grade = 'F';
}

//Print results
printf("total marks is %d\n, m1+m2+m3");
printf("avg marks is %f\n, total/3.0");
printf("grade is %c\n", grade);

return 0;
=======
#include<stdio.h>
int main() {
    int m1, m2, m3;
    int total;
float avg;
char grade;

//Input marks
printf("enter marks of m1\n");
scanf("%d", &m1);
printf("enter marks of m2\n");
scanf("%d", &m2);
printf("enter marks of m3\n");
scanf("%d", &m3);

//calculate grade
if (avg >= 90) {
    grade = 'A';
} else if (avg >= 75) {
    grade = 'B';
} else if (avg >= 50) {
    grade = 'C';
} else {
    grade = 'F';
}

//Print results
printf("total marks is %d\n, m1+m2+m3");
printf("avg marks is %f\n, total/3.0");
printf("grade is %c\n", grade);

return 0;
>>>>>>> 4c0cda1bdd65c1b3a06e980e78f870008171da14
}