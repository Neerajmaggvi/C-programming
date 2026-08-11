/*Write a C program to:

Read an integer n.
Find the sum of its digits.
Print the sum*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the num: ");
    scanf("%d",&num);

    int digit;
    int sum = 0;

    while (num != 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("Sum: %d\n",sum);
    
    return 0;
}