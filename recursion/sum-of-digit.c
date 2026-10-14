#include <stdio.h>

int fun(int num);

int main() 
{
    int num;

    printf("Enter the num : ");
    scanf("%d",&num);

    int result = fun(num);

    printf("Result =====> %d\n",result);


    return 0;
}

int fun (int num)
{
    static int sum = 0;

    if (num > 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        num = num / 10;
        fun(num);
    }

    return sum;
    
}