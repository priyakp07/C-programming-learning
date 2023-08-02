#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,n;
    printf("Enter a multiplication number\n");
    scanf("%d" , &n);
    {
    for ( i = 1; i <= 10; i++)
    {
       printf("%d*%d = %d\n" ,i,n,i*n) ;
    }
    }
    return 0;
}
