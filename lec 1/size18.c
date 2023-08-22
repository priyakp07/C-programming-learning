// sum of even and odd numbers

#include<stdio.h>

void main(int argc, char const *argv[])
{
    int A[10], i , sumofeven=0, sumofodd=0, n;
    int length = sizeof(A) / sizeof(A[0]);

    printf("Enter a number\n");
    for ( i = 0; i < length; i++)
    {
        scanf("%d" , &A[i]);
    }
    for ( i = 0; i < length; i++)
    {
        if(A[i] % 2 == 0) 
        sumofeven = sumofeven + A[i];

        else
        sumofodd = sumofodd + A[i];
    }
    printf("sum of even numbers is%d\n" , sumofeven);
    printf("\nsum of odd numbers is%d\n" , sumofodd);
}
