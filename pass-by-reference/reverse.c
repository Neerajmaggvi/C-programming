/*Write a function to reverse the digits of a number and return the reversed number using pass by reference.*/

#include <stdio.h>

void digit_reverse(int *ptr);

int main() 
{
    int num;

    printf("Enter num : ");
    scanf("%d",&num);

    int *ptr = &num;

    digit_reverse(ptr);

    printf("Reverse digit is -----> %d\n",*ptr);

    return 0;
}

void digit_reverse(int *ptr)
{
    int rev =0;

    while(*ptr != 0)
    {
        int digit = *ptr % 10;
        rev =(rev * 10) + digit;
        *ptr = *ptr / 10;
    }

    *ptr = rev;
    
}