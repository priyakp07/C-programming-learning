#include <stdio.h>

int sum(int);
int main(int argc, char const *argv[])
{
    printf("%d" , sum(6));
    return 0;
}
int sum(int n)
{
    if(n==1)
    return 1;
    return n*n + sum(n-1);
}