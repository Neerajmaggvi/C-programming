#include <stdio.h>

int fun(int num);

int main() 
{
    int num;

    printf("Enter the num : ");
    scanf("%d",&num);

    int result = fun(num);

    printf("Result ====>%d\n",result);

    return 0;
}

int fun(int num)
{
    static int count = 0;

    if(num > 0)
    {
        count++;
        num = num / 10;
        fun(num);
    }

    return count;
}

