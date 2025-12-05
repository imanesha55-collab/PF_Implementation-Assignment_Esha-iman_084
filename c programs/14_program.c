#include <stdio.h>
 int main()
 {
 float mm;
 printf("Enter length in millimeters: ");
 if (scanf("%f", &mm) != 1) return 0; 
float inches = mm / 25.4f;
 printf("%.2f mm = %.4f inches\n", mm, inches);
 return 0;
 } 

