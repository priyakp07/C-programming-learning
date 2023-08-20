// matrix multiplication

#include<stdio.h>
 
 int main(int argc, char const *argv[])
 {
    int A[2][2] , B[2][2] , C[2][2] , i , j;
    printf("Enter the first matric\n");
    for(i = 0; i <= 1; i++){
       for(j = 0; j <= 1; j++){
            scanf("%d" , &A[i][j]);
       } 
    }

    printf("Enter the second matric\n");
    for(i = 0; i <= 1; i++)
       for(j = 0; j <= 1; j++)
           scanf("%d" , &B[i][j]);

     printf("\nThis is first matrix");
    for(i = 0; i <= 1; i++)
    {
        printf("\n");
        {
       for(j = 0; j <= 1; j++)
           printf("%d " , A[i][j]);
        }
    }
     printf("\nThis is second matrix");
    for(i = 0; i <= 1; i++)
    {
        printf("\n");
        {
       for(j = 0; j <= 1; j++)
           printf("%d " , B[i][j]);
        }
    }
    printf("\nThis matrix multiplication is");
    for(i = 0; i <= 1; i++)
    {
        printf("\n");
        for(j = 0; j <= 1; j++)
           {
        C[0][0]=A[0][0]*B[0][0]+A[0][1]*B[1][0];
        C[0][1]=A[0][0]*B[0][1]+A[0][1]*B[1][1];
        C[1][0]=A[1][0]*B[0][0]+A[1][1]*B[1][0];
        C[1][1]=A[1][0]*B[0][1]+A[1][1]*B[1][1];
           printf("%d " , C[i][j]);
           }
    }
    
    return 0;
}
