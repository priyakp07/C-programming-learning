#include<stdio.h>

int main(int argc, char const *argv[])
{
    int A[2][2] , sum[2][2] , i , j;

    printf("input elements is the first matrix\n");
    for ( i = 0; i <= 1; i++)
        for(j = 0; j <= 1; j++)
        scanf("%d" , &A[i][j]); 

    printf("\nThe sum of row matrix\n");
    for ( i = 0; i <= 1; i++)
    {
        printf("\n");
        for(j = 0; j <= 1; j++)
        {
       printf("%d " , A[i][j]);
        }
        // sum of row
       sum[0][2] = A[0][0] + A[0][1];
       sum[1][2] = A[1][0] + A[1][1];
        printf("%d" , sum[i][j]);

    // printf("\nThe sum of colum matrix\n");
    // for ( i = 0; i <= 1; i++)
    // {
    //     printf("\n");
    //     for(j = 0; j <= 1; j++)
    //     {
    //    printf("%d " , A[i][j]);
    //     }
    // sum of colums
    //    sum[2][0] = A[0][0] + A[1][0];
    //    sum[2][1] = A[0][1] + A[1][1];
    //     printf("%d" , sum[i][j]);
    }
    return 0;
}
