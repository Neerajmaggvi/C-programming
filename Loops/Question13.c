/*Problem Statement

Write a C program to check whether a given number is an Armstrong Number.*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int num1 = num;
    int num2 = num;

    int count = 0;
    int digit;

    while (num != 0)
    {
        digit = num % 10;
        count++;
        num = num / 10;

    }
    printf("%d\n",count);

    int product;
    int sum = 0;

    while (num1 != 0)
    {
        digit = num1 % 10;
        product = 1;

        for (int i = 1; i <= count; i++)
        {
            product = product * digit;
        }

        sum = sum + product;
        num1 = num1 / 10;
        
    }

    if(num2 == sum)
    {
        printf("Armstone\n");
    }
    else
    {
        printf("not armstone\n");
    }

    return 0;
}