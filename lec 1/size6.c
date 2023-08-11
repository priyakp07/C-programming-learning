#include<stdio.h>

int fact (int);
int main(int argc, char const *argv[])
{
    printf("%d" , fact(5));
    return 0;
}
int fact (int n)
{
    if(n==0)
    return 1;
    return n * fact(n-1);
}