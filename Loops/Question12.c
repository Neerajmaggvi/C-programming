/*Strong Number

Definition

A number is called a Strong Number if the sum of the factorials of its digits is equal to the original number.*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);


    int num1 = num;

    int digit;
    int sum = 0;

    while (num != 0)
    {
        digit = num % 10;
        int fact = 1;
        for (int  i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;

        num = num / 10;
    }

    if(sum == num1)
    {
        printf("Strong number\n");
    }
    else
    {
        printf("Not a strong number\n");
    }
    
    return 0;
}