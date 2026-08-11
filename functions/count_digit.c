#include <stdio.h>

int count_digits(int num);

int main() 
{
    int num;

    printf("Enter the value: ");
    scanf("%d",&num);

    int result = count_digits(num);

    printf("Count is : %d\n",result);
    
    return 0;
}

int count_digits(int num)
{
    int count = 0;

    while (num != 0)
    {
        int digit = num % 10;
        count++;
        num = num / 10;
    }
    
    return count;
}