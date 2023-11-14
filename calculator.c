#include <stdio.h>


int main() {

    char operator;
    float num1,num2;
    float result;


    printf("Enter the operation ( + , - , * , / ) : ");
    scanf("%c", &operator);

    printf("Enter number 1 :");
    scanf("%f", &num1);

    printf("Enter number 2 :");
    scanf("%f", &num2);


    switch (operator)
    {
    case '+':

        result=num1+num2;
        printf("Result : %.2f", result);
        break;

    case '-':

        result=num1-num2;
        printf("Result : %.2f", result);
        break;

    case '*':

        result=num1*num2;
        printf("Result : %.2f", result);
        break;

    case '/':

        result=num1/num2;
        printf("Result : %.2f", result);
        break;
    
    default:
        printf("%c is not a valid operation", operator);
        break;
    }


    return 0;
}