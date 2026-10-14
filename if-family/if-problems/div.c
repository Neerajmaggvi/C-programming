#include<stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("Ok\n");
    }
    else
    {
        printf("not ok\n");
    }

    return 0;
    
}