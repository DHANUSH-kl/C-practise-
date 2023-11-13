#include <stdio.h>
#include <ctype.h>

int main() {

    char unit;
    float temp;


    printf("\nIs the temp is in (C) or (F) :");
    scanf("%s", &unit);
    
    unit=toupper(unit);

    if ( unit == 'C' ) {
        printf("Enter the temp in celsius : ");
        scanf("%f", &temp);

        temp= (temp * 9/5) +32;

        printf("the temp is fahrenheit is : %f", temp);
    }
    else if( unit=='F' ) {
        printf('Enter the temp is fahrenheit : ');
        scanf("%f", &temp);

        temp = ((temp-32) *5) /9;

        printf("the temp is celsius : %f", temp);
    }else {
        printf("%c is not a valid mesurement", unit);
    }

    return 0;
}