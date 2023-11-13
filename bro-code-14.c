#include <stdio.h>

int main() {

    int names[] = {2,5,7,8,9,6,7};

    printf("%d bytes",sizeof(names));
    printf("\n%d bytes",sizeof(names)/sizeof(names[0]));

    for (int i=0 ; i<=sizeof(names)/sizeof(names[0]); i++ ) {

        printf("%d\n", names[i]);
    } 

    return 0;
}