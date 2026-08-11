#include <stdio.h>

int sum_digit(int num)
{
    int sum = 0;

    while (num != 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        num = num / 10;

    }

    return sum;
    
}

int main() 
{
    int num;

    printf("Enter the num: ");
    scanf("%d",&num);
    
    int result = sum_digit(num);

    printf("The result is : %d\n",result);
    return 0;
}