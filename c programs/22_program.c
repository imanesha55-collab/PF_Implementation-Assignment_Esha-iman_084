#include <stdio.h>
int main() {
    char name[50], gender;
    int age;
    float height;
    gets(name);
    scanf("%d %f %c", &age, &height, &gender);
    printf("%s\n%d\n%.2f\n%c", name, age, height, gender);
    return 0;
}


