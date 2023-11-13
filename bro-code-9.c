#include <stdio.h>

void birthday(int age, char name[]){
    printf("happy birthday %s\n", name);
    printf("your are %d years old now", age);

}

int main() {

    int age;
    char name[20];

    printf("enter you name :\t");
    scanf("%s", &name);

    printf("Emter your age :\t");
    scanf("%d", &age);

    birthday(age,name);

    return 0;
}