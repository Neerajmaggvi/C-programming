#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers :");
    scanf("%d %d",&num1,&num2);

    if (num1 > num2)
    {
        printf("num1 is big\n");
    }
    else 
    {
        printf("num2 is big\n");
    }

    return 0;
    
}