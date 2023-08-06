#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, j;
    for ( i = 1; i <= 11; i++)
    {
        for ( j = 1; j <= 11; j++)
        {
           if(j<=5+i && j<=17-i && j>=7-i && j>=i-5)
           printf("*");
           else
           printf(" ");
        }
           printf("\n");  
    }
    
        return 0;
}
