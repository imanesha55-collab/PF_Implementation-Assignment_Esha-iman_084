#include <stdio.h>
int main() {
    double vi, a, t, s;
    scanf("%lf %lf %lf", &vi, &a, &t);
    s = vi * t + 0.5 * a * t * t;
    printf("%.2lf", s);
    return 0;
}

