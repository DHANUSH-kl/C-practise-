#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int min=1;
    int max=100;
    int guess;
    int guessess=0;
    int answer;
    

    srand(time(0));

    answer = (rand() % max ) + min;

    do
    {
     printf("Enter the guess : ");
     scanf("%d", &guess);

    if ( guess > answer ) {
        printf("Guess was too high!\n");
    }
    else if( guess < answer ) {
        printf("Guess was too low!\n");
    }
    else {
        printf("It was a correct guess\n");

    }
    guessess++;
    } while (guess != answer); 

    printf("*******************************\n");
    printf("%d was a correct guess\n", answer);
    printf("%d attempts\n", guessess);
    printf("*******************************");
    return 0;
}