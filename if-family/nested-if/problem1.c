#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    if(num > 0)
    {
        if(num % 2 ==0)
        {
            printf("The number is positive and even\n");
        }
        else 
        {
            printf("The number is positive and odd\n");
        }
    }
    if (num < 0)
    {
      if (num % 2 == 0)
      {
        printf("The number is negative and even\n");
      }
      else
      {
        printf("The number is negative and odd\n");
      }
      
    }
    else if (num == 0)
    {
       printf("The number is zero\n");
    }
    
    return 0;
}