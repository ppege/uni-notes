#include <stdio.h>
#include "circle.h"

int main() {
    printf("Input a radius: ");
    double radius;
    scanf("%lf", &radius);
    printf("The area is %lf and the circumference is %lf", area(radius), circumference(radius));
    return 0;
}
