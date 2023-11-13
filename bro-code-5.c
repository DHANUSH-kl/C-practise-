#include <stdio.h>
#include <math.h>

int main() {

    const double pi = 3.14;
    double area , radius , circumference;

    printf("enter the radius of the circle : ");
    scanf("%lf", &radius);

    circumference = pi*radius;
    area = pi*radius*radius;

    printf("circumference of the circle is : %lf\n", circumference);
    printf("area of the circle is : %lf", area);
    return 0;
}