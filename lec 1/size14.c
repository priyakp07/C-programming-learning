// find determinates using array 

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i , j, A[2][2] , det;

    printf("Enter determinate");
    for ( i = 0; i <= 1; i++)
        for ( j = 0; j <= 1; j++)
            scanf("%d" , &A[i][j]);

    printf("\nThis determinates is \n");
    for ( i = 0; i <= 1; i++)
        {
            printf("\n");
            for ( j = 0; j <= 1; j++)
               printf("%d " , A[i][j]);
        }
               det = A[0][0]*A[1][1]-A[1][0]*A[0][1];
                  printf("This is %d\n" , det);
               
    return 0;
}

