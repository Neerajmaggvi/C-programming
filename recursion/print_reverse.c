#include <stdio.h>

void fun(int num);

int main() 
{
    int num;

    printf("Enter the num : ");
    scanf("%d",&num);

    fun(num);
    return 0;
}

void fun(int num)
{
    if(num > 0)
    {
        printf("%d ",num);
        fun(num - 1);
    }
}
