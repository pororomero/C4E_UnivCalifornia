/*
    Circle and Area
    June 13, 2020
*/

#include <stdio.h>
#define PI 3.14159

int main(void){
    double area = 0.0, radius = 0.0;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("radius of %.6lf meters; area is %.6lf sq. meters\n", radius, area);

    return 0;
}
