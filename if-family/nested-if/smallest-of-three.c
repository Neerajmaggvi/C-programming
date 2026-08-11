#include <stdio.h>
int main() 
{
    int a, b, c;

    printf("Enter the three numbers:");
    scanf("%d %d %d",&a, &b, &c);

    if (a < b)
    {
      if (a < c)
      {
        printf("The smallest value is: %d\n",a);
      }
      
    }

    if (b < a)
    {
       if (b < c)
       {
        printf("The smallest value is: %d\n",b);
       }
       
    }

    if (c < a)
    {
        if (c < b)
        {
            printf("The smallest value is: %d\n",c);
        }
        
    }
    
    
    
    return 0;
}