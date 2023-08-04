#include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age\n");
    scanf("%d" , &age);

    if(age <=20)
    {
      printf("your age is under 20 .");
    }
    else
    {
        printf("your age is up to 31 .");
    }
        return 0;
}
