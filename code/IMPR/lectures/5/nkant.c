#include <stdio.h>
#include <math.h>

typedef struct Point {
    double x;
    double y;
} Point;

double distance(Point p1, Point p2) {
    return sqrt(pow(p1.x-p2.x, 2)+pow(p1.y-p2.y, 2));
}

double total_distance(int vertices, Point points[vertices]) {
    double total = 0;
    for (int i = 0; i < vertices; i++) {
        total += distance(points[i], points[i + 1]);
    }
    total += distance(points[vertices], points[0]);
    return total;
}

int main() {
    printf("How many vertices in your shape?: ");
    int vertices;
    scanf("%i", &vertices);
    Point points[vertices];
    for (int i = 0; i < vertices; i++) {
        printf("Enter point %i (x,y): ", i + 1);
        scanf("%lf,%lf", &points[i].x, &points[i].y);
    }
    printf("The total side length of your n-gon is %lf", total_distance(vertices, points));
}
