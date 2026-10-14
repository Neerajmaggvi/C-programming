/*Check prime number from 1 to limit*/

#include <stdio.h>
int main() 
{
    int limit;

    printf("Enter the number: ");
    scanf("%d",&limit);

   for (int i = 2; i < limit; i++)
   {
    for (int j = 2; j <= i; j++)
    {
        if (i % j == 0)
        {
            /* code */
        }
        
    }
    
   }
   
    
    return 0;
}