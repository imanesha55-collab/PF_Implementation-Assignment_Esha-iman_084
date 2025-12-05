#include <stdio.h>
int main() {
    double num = 15.58971, fractional;
    int integral = (int)num;
    fractional = num - integral;
    printf("%d %.5lf", integral, fractional);
    return 0;
}

