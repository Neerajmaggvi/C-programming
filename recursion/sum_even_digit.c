#include <stdio.h>

int fun(int num);

int main() 
{
    int num;

    printf("Enter the num :");
    scanf("%d",&num);

    int result = fun(num);

    printf("result =====> %d\n",result);
    
    return 0;
}

int fun(int num)
{
    static int sum = 0;
    static int i = 1;

    if (num > i)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
        fun(num);
    }
    return sum;
}