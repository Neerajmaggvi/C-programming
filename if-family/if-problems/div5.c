#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    if (num % 5 == 0)
    {
        printf("The value is div by 5\n");
    }
    else 
    {
        printf("The value is not div by 5\n");
    }
    
}