#include <stdio.h>
int sum(int a , int b)
{
return a + b;
}
int main(int argc, char const *argv[])
{
    int a, b, c ;
    a = 56;
    b = 35;
    c = sum(a,b);
    printf(" This sum is %d\n" , c);
    return 0;
}
