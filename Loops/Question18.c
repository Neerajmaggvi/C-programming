/*Check if number is neon number or not*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    int num1 = num;

    int square;

    square = num * num;

    int sum = 0;

    while (square != 0)
    {
        int digit = square % 10;
        sum = sum + digit;
        square = square / 10;
        
    }
   
    if (num1 == sum)
    {
        printf("Neon number\n");
    }
    else
    {
        printf("Not neon number\n");
    }
    

    return 0;
}