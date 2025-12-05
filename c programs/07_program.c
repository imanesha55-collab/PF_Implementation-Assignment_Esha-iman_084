#include <stdio.h>
 int main()
 {
 int rollNo;
 int marks1, marks2, marks3;
 printf("Enter Roll No: "); 
if (scanf("%d", &rollNo) != 1) return 0;
 printf("Enter marks of Programming Fundamentals (out of 100): ");
 if (scanf("%d", &marks1) != 1) return 0;
 printf("Enter marks of Introduction to Computing (out of 100): ");
 if (scanf("%d", &marks2) != 1) return 0; 
printf("Enter marks of Computer Graphics (out of 100): ");
 if (scanf("%d", &marks3) != 1) return 0; 
int total = marks1 + marks2 + marks3;
 float average = total / 3.0f;
 printf("Roll No: %d\n", rollNo); 
printf("Total = %d\n", total); 
printf("Average = %.2f\n", average); return 0;
 } 


