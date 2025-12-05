#include <stdio.h>
int main() {
    int years, months, days;
    scanf("%d", &years);
    months = years * 12;
    days = years * 365;
    printf("%d %d", months, days);
    return 0;
}

