/*Write a program to reverse a number.*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the value: ");
    scanf("%d",&num);

    int digit;
    int rev = 0;

    while (num != 0)
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }

    printf("Reverse of num is: %d\n",rev);
    

    return 0;
}