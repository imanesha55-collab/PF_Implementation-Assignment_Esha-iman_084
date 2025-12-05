#include <stdio.h>
 int main()
 {
 const float PI = 3.1417f;
 float r, h;
 printf("Enter radius: ");
 if (scanf("%f", &r) != 1) return 0; 
printf("Enter height: ");
 if (scanf("%f", &h) != 1) return 0;
 float volume = PI * r * r * h;
 printf("Volume of cylinder = %.3f\n", volume);
 return 0;
 } 

