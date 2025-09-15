#include <stdio.h>
#include <math.h>

int main(void) {

    /* User input */
    double p1_x, p1_y, p2_x, p2_y, p3_x, p3_y;
    printf("Enter three coordinates (x1 y1 x2 y2 x3 y3): ");
    scanf("%lf %lf %lf %lf %lf %lf", &p1_x, &p1_y, &p2_x, &p2_y, &p3_x, &p3_y);
    printf("The entered coordinates are (%lf, %lf), (%lf, %lf), (%lf, %lf)\n", p1_x, p1_y, p2_x, p2_y, p3_x, p3_y);

    /* Calculating side lengths */
    double delta_1 = sqrt(pow(p1_x-p2_x, 2)+pow(p1_y-p2_y, 2));
    printf("The distance between point 1 and point 2 is %lf\n", delta_1);
    double delta_2 = sqrt(pow(p2_x-p3_x, 2)+pow(p2_y-p3_y, 2));
    printf("The distance between point 2 and point 3 is %lf\n", delta_2);
    double delta_3 = sqrt(pow(p3_x-p1_x, 2)+pow(p3_y-p1_y, 2));
    printf("The distance between point 3 and point 1 is %lf\n", delta_3);
    double total_length = delta_1 + delta_2 + delta_3;
    printf("The total side lengths of this triangle is %lf\n", total_length);

    /* Finding area */
    double s = total_length / 2;
    double area = sqrt(s*(s-delta_1)*(s-delta_2)*(s-delta_3));
    printf("The area of the triangle is %lf\n", area);

    return 0;
}
