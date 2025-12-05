#include <stdio.h> 
int main() 
{
 int years; 
printf("Enter age in years: ");
 if (scanf("%d", &years) != 1) return 0;
 printf("Age in months = %d\n", years * 12);
 return 0;
 } 


