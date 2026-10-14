/*Largest and Smallest Digit in a Number*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int num1 = num;

    int largest = 0;
    int digit;

    while(num != 0)
    {
        digit = num % 10;
        if (digit > largest)
        {
            largest = digit;
        }
        num = num / 10;
        
    }
    printf("Largest: %d\n",largest);

    int smallest = largest;

    while(num1 != 0)
    {
        digit = num1 % 10;
        if (digit < smallest)
        {
            smallest = digit;
        }
        num1 = num1 / 10;
        
    }
    printf("Smallest: %d\n",smallest);

    return 0;
}