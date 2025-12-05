#include <stdio.h>
 int main() 
{
 int a, b, c, d; 
printf("Enter four integers: "); 
if (scanf("%d %d %d %d", &a, &b, &c, &d) != 4) return 0;
 int max = a;
 if (b > max) max = b; 
if (c > max) max = c;
 if (d > max) max = d;
 printf("Maximum = %d\n", max);
 return 0; 
} 


