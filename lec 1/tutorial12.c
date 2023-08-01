#include <stdio.h>

// int sum(int a, int b);
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
      printf("%c" , '*');   
    }
}
    int main(int argc, char const *argv[])
{
    int a, b, c;
    a = 32;
    b = 21;
    // c = sum(a,b);

    printstar(6);
    return 0;
}

