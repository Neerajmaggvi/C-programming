/*Write a program that:

Reads an integer.
Counts how many even digits it has.
Counts how many odd digits it has.*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int even = 0;
    int odd = 0;
    int digit;

    while (num != 0)
    {
        digit = num % 10;
        if (digit % 2 == 0)
        {
            even ++;
        }
        else if(digit % 2 != 0)   
        {
            odd ++;
        }
        num = num / 10;
        
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    
    
    return 0;
}