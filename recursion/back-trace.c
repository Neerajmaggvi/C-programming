#include <stdio.h>

void fun(int num);

int main() 
{
    int num = 10;

    fun(num);

    return 0;
}

void fun(int num)
{
    if(num > 0)
    {
        fun(num - 1);
        printf("%d\n",num);
    }
}