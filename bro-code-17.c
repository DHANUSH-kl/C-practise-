#include <stdio.h>
#include <string.h>

int main() {


    char x = 'X';
    char y = 'Y';
    char temp;

    temp=x;
    x=y;
    y=temp;



    printf("%c\n", x);
    printf("%c", y);

    return 0;
}