#include <stdio.h>
#include <ctype.h>

int main() {

    char questions[][100]= { "1. Who is the captain of the Straw Hat Pirates?",
                             "2. Which Devil Fruit does Luffy consume, granting him rubber-like abilities?",
                             "3. Which pirate crew does Trafalgar Law lead?" };

    char options[][100] = { "A. Zoro" , "B. Luffy" , "C. Sanji" , "D. Nami",
                            "A. Mera Mera no Mi" , "B. Gomu Gomu no Mi" , "C. Bara Bara no Mi" , "D. Hito Hito no Mi",
                            "A. Heart Pirates" , "B. Kid Pirates" , "C. Blackbeard Pirates" , "D. Red-Haired Pirates" };

    char answer[]={'B', 'B','A'};
    char guess;
    int count=0;

    for(int i=0 ; i<sizeof(questions)/sizeof(questions[0]) ; i++) {
        printf("\n**************************\n\n");
        printf("%s\n", questions[i]);

        for( int j=(i*4) ; j<(i*4)+4 ; j++ ) {
            printf("%s\n", options[j]);
        }
        printf("enter any one of the given option :");
        scanf(" %c", &guess);
        guess=toupper(guess);

        if(guess==answer[i]) {
          printf("\nCorrect\n");
          count++;

        }
        else {
            printf("Wrong\n");
        }

    }

printf("\nfinal score is : %d", count);
   
    return 0;
}