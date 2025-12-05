#include <stdio.h>
int main() {
    double rupees, dollars;
    scanf("%lf", &rupees);
    dollars = rupees / 60.0;
    printf("%.2lf", dollars);
    return 0;
}

