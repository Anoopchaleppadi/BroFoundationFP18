//-Write a program to calculate the area of a circle given its radius (Area = π * r^2).
#include <stdio.h>
#include <stdlib.h>
int main() {
    float area, radius;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("Area of the circle is %f", area);
}