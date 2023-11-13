#include <stdio.h>
#include <string.h>

struct player {

    char name[20];
    int score;
};

int main() {

    struct player player1;
    struct player player2;

    strcpy(player1.name, "dhanush");
    player1.score=5;

    strcpy(player2.name, "random");
    player2.score=2;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);

    return 0;
}