#include <stdio.h>

int main() {

    int prices[2][2] = { {2,4} , {3,6} };

    for ( int i=0; i<sizeof(prices)/sizeof(prices[0]); i++ ) {

        for ( int j=0 ; j<sizeof(prices)/sizeof(prices[0]); j++)  {
            printf("%d " , prices[i][j]);
        }
        printf("\n");
    }

    return 0;
}