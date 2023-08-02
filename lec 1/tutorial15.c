#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, n;
    printf("Enter terms\n");
    scanf("%d" , &n);

    for ( i = 1; i <= n; i++)
    {
       for ( j = 1; j < n+i+1; j++)
       {
        printf(" ");
       }
       for ( j = i; j <= n-i; j++)
       {
        printf("*");
       }
       printf("\n");
    }
    
    return 0;
}
