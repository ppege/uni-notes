#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

double get_circumference(double radius) {
    return 2 * M_PI * radius;
}

double get_area(double radius) {
    return M_PI * radius * radius;
}

int main() {
    printf("Radius: ");
    double radius;
    scanf("%lf", &radius);
    printf("What to calculate? (circumference/area): ");
    char choice[14];
    scanf("%13s", choice);
    double result;
    if (strcmp(choice, "circumference") == 0) {
        result = get_circumference(radius);
    } else if (strcmp(choice, "area") == 0) {
        result = get_area(radius);
    } else {
        printf("%s is invalid input!", choice);
        exit(1);
    }
    printf("Your result is %lf", result);
}
