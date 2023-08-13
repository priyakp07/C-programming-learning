#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[5] , i , sum=0;
    float avg;
    printf("Enter 5 number");
    for ( i = 0; i <= 4; i++)
    {
        scanf("%d" , &a[i]);
    }
    for ( i = 0; i <= 4; i++)
    {
        sum = sum + a[i];
    }
    avg = sum / 5.0;
    printf(" %f", avg );

    printf("\n");
    return 0;
}
