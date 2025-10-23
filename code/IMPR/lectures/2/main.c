#include <stdio.h>
#include <math.h>

typedef struct Point {
    double x;
    double y;
} Point;

double distance(Point p1, Point p2) {
    return sqrt(pow(p1.x-p2.x, 2)+pow(p1.y-p2.y, 2));
}

double total_length(Point p1, Point p2, Point p3) {
    return distance(p1, p2) + distance(p2, p3) + distance(p3, p1);
}

int main(void) {

    /* User input */
    Point p1, p2, p3;
    printf("Enter three coordinates (x1 y1 x2 y2 x3 y3): ");
    scanf("%lf %lf %lf %lf %lf %lf", &p1.x, &p1.y, &p2.x, &p2.y, &p3.x, &p3.y);
    printf("The entered coordinates are (%lf, %lf), (%lf, %lf), (%lf, %lf)\n", p1.x, p1.y, p2.x, p2.y, p3.x, p3.y);

    /* Finding area */
    double s = total_length(p1, p2, p3) / 2;
    double area = sqrt(s*(s-distance(p1, p2))*(s-distance(p2, p3))*(s-distance(p3, p1)));
    printf("The area of the triangle is %lf\n", area);

    return 0;
}
