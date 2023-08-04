#include<stdio.h>

int main()
{
    char i, j, n='A';
    for ( i = 'A'; i <= 'F'; i++)
    {
        for ( j = 'A'; j <= i; j++)
        {
          printf(" %c" , n++);  
        }
       printf("\n");
    }
    return 0;
}
  