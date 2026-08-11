/*Sum of first N natural numbers*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the numbers: ");
    scanf("%d",&num);

    int sum = 0;

    for (int i = 1; i <= num; i++)
    {
       sum = sum + i;
    }

     printf("The sum is : %d\n",sum);
    
    return 0;
}