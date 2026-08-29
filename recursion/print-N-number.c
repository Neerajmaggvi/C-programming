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
    static int i = 1;

    if (i <= num)
    {
        printf("%d ",i);
        i++;
        fun(num);
    }
    
}