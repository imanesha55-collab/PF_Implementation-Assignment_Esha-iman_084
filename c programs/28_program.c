#include <stdio.h>
int main() {
    double a, b, c, disc;
    scanf("%lf %lf %lf", &a, &b, &c);
    disc = b * b - 4 * a * c;
    printf("%.2lf", disc);
    return 0;
}

