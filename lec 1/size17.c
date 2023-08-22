// sum of numbers

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[5], r, i;
    int sum=0;
    int length = sizeof(A) / sizeof(A[0]);
    printf("Enter any number\n" );
    for ( i = 0; i < length; i++)
    {
        scanf("%d", &A[i]);
    }
    for ( i = 0; i < length; i++)
    {
         sum = sum + A[i];
    }
    printf("sum is%d\n", sum);
    
    return 0;
}
