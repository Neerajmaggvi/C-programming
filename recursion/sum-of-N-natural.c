#include <stdio.h>

int fun(int num);

int main() 
{
    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    int result = fun(num);
    printf("%d\n",result);

    return 0;
}

int fun(int num)
{
    static int sum = 0;

    if(num > 0)
    {
        sum = sum + num;
        fun(num - 1);
    }
    return sum;
}