#include <stdio.h>
int main() {
    double m1, m2, m3, m4, m5, total, average;
    scanf("%lf %lf %lf %lf %lf", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;
    printf("%.2lf %.2lf", total, average);
    return 0;
}

