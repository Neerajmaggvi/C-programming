/*Check for spy number */

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int sum = 0;
    int product = 1;

    while(num != 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        product = product * digit;
        num = num / 10;
        
    }
   
    if(product ==  sum)
    {
        printf("Spy number\n");
    }
    else
    {
        printf("Not spy numeber\n");
    }
    
    return 0;
}