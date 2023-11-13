#include <stdio.h>
#include <string.h>

int main() {

    char first[15]="water";
    char second[15]="juice";
    char temp[15];

    strcpy(temp,first);
    strcpy(first,second);
    strcpy(second,temp);


    printf("%s\n", first);
    printf("%s", second);


    return 0;
}