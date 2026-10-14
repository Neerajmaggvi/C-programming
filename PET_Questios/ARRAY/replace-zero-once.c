/*Write a C program to convert every digit 1 in a given integer into 0.

Example:

Input:
1181701140

Output:
0080700040*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter a number : ");
    scanf("%d",&num);

    int temp = num;

    int rev = 0;

    while (temp != 0)
    {
        int digit = temp % 10;
        if(digit == 1)
        {
            digit = 0;
        }
        rev = (rev * 10) + digit;
        temp = temp / 10;

    }
   
    int result = 0;

    while(rev != 0)
    {
        int digit = rev % 10;
        result = (result * 10) + digit;
        rev = rev / 10;
    }

    printf("Result ====> %d\n",result);
    
    return 0;
}