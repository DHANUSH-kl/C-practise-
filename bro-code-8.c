#include <stdio.h>

int main() {

    char operation;
    float num1,num2,result;

    printf("Enter any one of the operations ( +, - , * , / ) :");
    scanf("%s", &operation);

    printf("Enter number 1 : ");
    scanf("%f", &num1);

    printf("Enter number 2 : ");
    scanf("%f", &num2);
    
    switch (operation)
    {
    case '+':
        result=num1+num2;
        printf("addition of two numbers is : %.2f", result);
        break;

     case '-':
        result=num1-num2;
        printf("subtraction of two numbers is : %.2f", result);
        break;

     case '*':
        result=num1*num2;
        printf("multiplication of two numbers is : %.2f", result);
        break;

     case '/':
        result=num1/num2;
        printf("division of two numbers is : %.2f", result);
        break;
    
    default:
        printf("%c is an invalid entry", operation);
        break;
    }




    return 0;
}