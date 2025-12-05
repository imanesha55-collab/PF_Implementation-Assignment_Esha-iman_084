#include <stdio.h> 
#define PI 3.1417f 
int main()
 {
 float r; 
printf("Enter radius: ");
 if (scanf("%f", &r) != 1) return 0;
 float area = PI * r * r;
 printf("Area of circle = %.3f\n", area);
 return 0;
 } 

