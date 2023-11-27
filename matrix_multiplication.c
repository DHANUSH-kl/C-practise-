#include <stdio.h>
#define MAX 50

int main(){

    int a[MAX][MAX],b[MAX][MAX],product[MAX][MAX];
    int i,j,k;
    int arows,acolumns,brows,bcolumns;


    printf("Enter the rows of first matrix : ");
    scanf("%d",&arows);
    printf("Enter the columns of firts matrix : ");
    scanf("%d",&acolumns);

    printf("Enter the rows of second matrix : ");
    scanf("%d",&brows);
    printf("Enter the columns of second matrix : ");
    scanf("%d",&bcolumns);

    if(acolumns != brows ){
        printf("Matrix is not multiplible");
        return 1;
    }

    printf("Enter the elements of first matrix : ");

    for ( i=0 ; i<arows ; i++ ){
        for( j=0 ; j<acolumns ; j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements of second matrix : ");

    for ( i=0 ; i<brows ; i++ ){
        for( j=0 ; j<bcolumns ; j++){
            scanf("%d",&b[i][j]);
        }
        printf("\n");

    }

    for( i=0 ; i<arows ; i++ ){
        for( j=0 ; j<bcolumns ; j++ ){
                int sum=0;
            for( k=0 ; k<brows ; k++ ){
                sum+= a[i][k] * b[k][j] ;
            }
            product[i][j]=sum;
            sum=0;
        }
    }

    printf("Result for matrix multiplication : \n");

    for( i=0 ; i<arows ; i++ ){
        for( j=0 ; j<acolumns ; j++ ) {
            printf("%d ",product[i][j]);
        }
        printf("\n");

    }



    return 0;
}