#include <stdio.h>
 int main()
 {
 int num1, num2;
 printf("Enter two integers: ");
 if (scanf("%d %d", &num1, &num2) != 2) return 0; 
printf("Sum = %d\n", num1 + num2);
 printf("Product = %d\n", num1 * num2);
 return 0; 
} 

