#include <stdio.h>
 int main()
 {
 float f, c;
 printf("Enter temperature in Fahrenheit: ");
 if (scanf("%f", &f) != 1) return 0;
 c = (5.0f / 9.0f) * (f - 32.0f); 
printf("Temperature in Celsius = %.2f\n", c); 
return 0; 
} 


