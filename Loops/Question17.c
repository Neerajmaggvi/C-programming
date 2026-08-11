/*Find the input number is Automorphic number or not*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int num1 = num;

    int square;

    square = num * num;

    int count = 0;

    while (num != 0)
    {
        count++;
        num = num / 10;
    }
    // printf("%d\n",count);

    int value = 10;

    for (int  i = 1; i < count; i++)
    {
        value = value * 10;
    }
    // printf("%d\n",value);
    
    int last_digits;

    last_digits = square % value;

    // printf("%d\n",last_digits);

    if (num1 == last_digits)
    {
        printf("Automorphic number\n");
    }
    else
    {
        printf("Not a automorphic number\n");
    }

    return 0;
}