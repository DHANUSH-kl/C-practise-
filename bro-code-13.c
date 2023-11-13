#include <stdio.h>

int main () 
{

    for(int i=0;i<20;i++) {
        if(i == 13) {
            continue;
            // break;
        }
        printf("\n%d", i);
    }

    return 0;
}


// break vs continue 