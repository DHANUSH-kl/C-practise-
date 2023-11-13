#include <stdio.h>

int main() {

    int numbers[2][3];

    numbers[0][0]=1;
    numbers[0][1]=5;
    numbers[0][2]=8;
    numbers[1][0]=4;
    numbers[1][1]=3;
    numbers[1][2]=9;

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    printf("rows :  %d", rows);

    int columns = sizeof(numbers[0])/sizeof(numbers[0][1]);
    printf("\ncolumns : %d\n", columns);

    for ( int i=0; i<rows; i++ ) {
        for( int j=0; j<columns; j++ ) {
            printf("%d " , numbers[i][j]);
        }
        printf("\n");
    }
    return 0;
}