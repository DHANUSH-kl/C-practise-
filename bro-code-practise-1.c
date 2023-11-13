#include <stdio.h>

int main() {

    char operations;
    float num1,num2,result;

    printf("Enter the operations you want to perform ( + , - , * , / ) : ");
    scanf("%c", &operations);

    printf("\nEnter number 1 : ");
    scanf("%f", &num1);

    printf("\nEnter number 2 : ");
    scanf("%f", &num2);

    switch (operations) 
    {
        case '+' :
            result=num1+num2;
            printf("%.2f", result);

            break;

        case '-' :
            result=num1-num2;
            printf("%.2f", result);

            break;

        case '*' :
            result=num1*num2;
            printf("%.2f", result);

            break;

        case '/' :
            result=num1/num2;
            printf("%.2f", result);

            break;

        default :
            printf("%c is a wrong operation please try again", operations);

            break;
    }

        return 0;
}