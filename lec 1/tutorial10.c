#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    printf("Enter the multiplication number\n");
    scanf("%d" , &i);
    {
        for ( i = 0; i <= 20; i++)
        {
             printf("%d\n" , i);
             i =  i + 1;
        }
    }
    return 0;
}
