#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, j;
    printf("Table chart\n");
    for ( i = 1; i <= 10; i++)
    {
        for(j = 1; j <= 10; j++)
        {
        printf("%d\t" , i*j);
        }
        printf("\n");
    }
   
    return 0;
}
