#include <stdio.h>

int main() {

    float result;
    float radius;
    float pi=3.14;
    
    printf("Enter the radius of circle :");
    scanf("%f", &radius);

    result=2*pi*radius;

    printf("Perimeter of the circle is : %.2f", result);

    

    return 0;
}