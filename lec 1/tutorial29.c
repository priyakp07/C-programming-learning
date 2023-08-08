#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, j;
    for ( i = 1; i <=19; i++)  
    {

       for ( j = 1; j <= 19; j++)
       {
        if(j<=9+i && j<=29-i && j>=i-9 && j>=11-i)
        
              if(j<=4+i && j<=24-i && j>=16-i && j>=i-4)
              {
              printf(" ");
              }
              else
        {
        printf("%C",'A');
        }
        else
        printf(" ");
       }
       printf("\n");
    }
    
    return 0;
}
