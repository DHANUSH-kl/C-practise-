#include <stdio.h>

int main() {

    float item1 = 5.76;
    float item2 = 10.862;
    float item3 = 7.65;

    printf("item 1 : $%f\n",item1);
    printf("item 2 : $%f\n",item2);
    printf("item 3 : $%f\n\n",item3);

    printf("item 1 : $%.1f\n",item1);
    printf("item 2 : $%.1f\n",item2);
    printf("item 3 : $%.1f\n\n",item3);

    printf("item 1 : $%8.1f\n",item1);
    printf("item 2 : $%8.1f\n",item2);
    printf("item 3 : $%8.1f\n",item3);
    return 0;
}