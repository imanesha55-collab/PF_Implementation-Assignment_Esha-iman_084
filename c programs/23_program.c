#include <stdio.h>
#define PI 3.141592653589793
int main() {
    double r, area, circumference;
    scanf("%lf", &r);
    area = PI * r * r;
    circumference = 2 * PI * r;
    printf("%.6lf %.6lf", area, circumference);
    return 0;
}
s
