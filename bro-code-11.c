#include <stdio.h>

int findMax(int x, int y)
{
    return (x>y) ? x : y ;
}

int main() 
{

    int x = findMax(3,4);

    printf("%d", x); 

    return 0;
}

// ternery operator 