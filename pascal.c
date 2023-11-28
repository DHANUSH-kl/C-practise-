#include <stdio.h>

int main() {

    int r,s;

    printf("Enter number of row's : ");
    scanf("%d",&r);

    for( int i=0 ; i<r ; i++ ){
        int c=1;
        for( s=0 ; s<r-i ; s++ ){
            printf(" ");
        }for(int j=0 ; j<=i ; j++){
                if(j==0 || i==0){
                    printf("%d",c);
                }else{
                    c=c*(i-j+1)/j;
                    printf("%4d ",c);
                }
            }
            printf("\n");
    }

    return 0;
}