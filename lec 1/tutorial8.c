#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,num;
    for(i = 0; i < 7; i++)
    {
        printf("%d\n" , i);
        for(j = 0; j < 9; j++)
      {
        printf("Enter the number\n");
        scanf("%d" , &num);
        if(num==0)
        {
            goto end;
        }
      } 
    
    }
    end:
    return 0;
}  
