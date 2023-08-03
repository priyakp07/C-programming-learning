#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter any number between 1 to 12\n");
    scanf("%d" , &a);

    printf("This month is\n");
    switch (a)
    {
        case 1:
        printf("january\n");
         break;

         case 2:
        printf("fabruary\n");
        break;

         case 3:
        printf("march\n");
        break;

         case 4:
        printf("april\n");
        break;

         case 5:
        printf("may\n");
        break;

         case 6:
        printf("jun\n");
        break;

         case 7:
        printf("july\n");
        break;

         case 8:
        printf("august\n");
        break;

         case 9:
        printf("september\n");
        break;

         case 10:
        printf("october\n");
        break;

         case 11:
        printf("number\n");
        break;

         case 12:
        printf("december\n");
        break;

    }
    return 0;
}
