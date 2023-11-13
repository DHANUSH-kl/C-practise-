#include <stdio.h>

int main() {

    int rows,columns;
    char symbol;

    printf("\n Enter the number of rows :");
    scanf("%d", &rows);

    printf("\n Enter the number of columns :");
    scanf("%d", &columns);

    scanf("%c");

    printf("\n Enter the symbol :");
    scanf("%c", &symbol);

    for( int i=1; i<=rows; i++ ) {

        for( int j=1; j<=columns; j++ ) {
            printf("%c", symbol);
        }
        printf("\n");

    }

    return 0;
}