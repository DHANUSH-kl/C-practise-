#include <stdio.h>
#include <string.h>

// typedef char user[25];

typedef struct 
{
    char userName[25];
    int password;

} user;



int main() {

    user user1={"luffy",123456789};
    user user2={"zoro",987654321};


    printf("%s\n", user1.userName);
    printf("%d\n", user1.password);

    printf("%s\n", user2.userName);
    printf("%d\n", user2.password);


    return 0;
}
