#include <stdio.h>

int fact_num(int num);

int main() 
{
    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    int result = fact_num(num);

    printf("The fact is ====> %d\n",result);

    return 0;
}

int fact_num(int num)
{
    static int fact = 1;

    if(num > 0)
    {
        fact = fact * num;
        num--;
        fact_num(num);
    }

    return fact;
}