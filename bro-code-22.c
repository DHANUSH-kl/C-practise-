#include <stdio.h>
#include <string.h>

struct student {

    char name[12];
    float gpa;
};

int main() {

    struct student student1 ={"Luffy",1};
    struct student student2 ={"Ace",4};
    struct student student3 ={"Sabo",9};

    struct student students[]= {student1,student2,student3};

    for( int i=0 ; i<sizeof(students)/sizeof(students[0]) ; i++ ) {
        printf("%-12s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }

    return 0;
}

// Array of structs