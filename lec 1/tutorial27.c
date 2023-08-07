#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, x;
    for ( i = 1; i <= 9; i++)
    {
       x=1;
        {
            for ( j = 1; j <= 9; j++)
        
            if(j<=4+i && j<=14-i && j>=6-i && j>=i-4)
            {
            printf("%d" , x );
            x++;
            }

            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
