/*Factorial of a number using a loop*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the value: ");
    scanf("%d",&num);

    int fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("The factorial of number %d is: %d\n",num,fact);
    
    return 0;
}