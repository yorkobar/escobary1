
#include <stdio.h>
int main ()
{
        int n,num1,num2,result;
        char o;
    do{
        printf("What would you like to do?\n");
        printf("press 1 for addition\n");
        printf("press 2 for subtraction\n");
        printf("press 3 for multiplication\n");
        printf("press 4 for division\n");
        scanf("%d",&n);
        printf("please enter a number\n");
        scanf("%d",&num1);
        printf("please enter second number\n");
        scanf("%d",&num2);
          if ((num2 == 0)&&(n==4))
          {
            printf("can not divide by zero\n");
            break;
          }
        switch(n)
        {
          case 1: result  = num1 + num2;
                  printf("Addition of two numbers is %d", result);
                  break;
          case 2: result  = num1 - num2;
                  printf("Subtraction of two numbers is %d", result);
                  break;
          case 3: result  = num1 * num2;
                  printf("Multiplication of two numbers is %d", result);
                  break;
          case 4: result  = num1 / num2;
                  printf("Division of two numbers is %d", result);
                  break;

          //printf("\ndo you want to try again y/n?\n");
          //scanf("%c",&o);
              }
          }while(o =='y');
  return 0;
}
