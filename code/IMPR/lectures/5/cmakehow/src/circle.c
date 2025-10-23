#include "circle.h"
#include <math.h>

double area(double radius) {
    return M_PI * radius * radius;
}

double circumference(double radius) {
    return 2 * M_PI * radius;
}
