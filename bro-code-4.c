#include <stdio.h>

int main() {

    int age;
    char name[25];

    printf("enter your name: ");
    fgets(name,25,stdin);
    // scanf("%s", &name);   it wont read the white spaces 

    
    printf("enter you age: ");
    scanf("%d" ,&age);
    
    printf("heyy %s\n", name);
    printf("you are %d years old\n", age);
    return 0;
}