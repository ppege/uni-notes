#include <stdio.h>
#define KMS_PER_MILE 1.609

int main(void) {
    double miles;
    printf("Enter the distance in miles: ");
    scanf("%lf", &miles);
    printf("That equals %lf", miles * KMS_PER_MILE);
    return 0;
}
