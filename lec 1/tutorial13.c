#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
      int a, b;
      char op;
      int c;
      printf("Enter the firt number\n");
      scanf("%d" , &a);

      printf("Enter the oprations\n");
      scanf(" %c" , &op);

      printf("Enter the second number\n");
      scanf("%d" , &b);

      printf("This is the result\n");

      switch (op)
      {
      case '+':
        c = a + b;
        printf("%d" , c);
        break;

         case '-':
        c = a - b;
        printf("%d" , c);
        break;

         case '*':
        c = a * b;
        printf("%d" , c);
        break;

         case '/':
        c = a / b;
        printf("%d" , c);
        break;

         case '%':
        c = a % b;
        printf("%d" , c);
        break;
      }

          return 0;
}
