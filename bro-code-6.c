#include<stdio.h>

int main() {

    int age;

    printf("enter your age : ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("your are signed up!");
    } 
    else if (age<0){
        printf("you haven't been born yet");
    }
    else{
        printf("you are too young to sign up");
    }

    return 0;
}