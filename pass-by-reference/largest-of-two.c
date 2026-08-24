/*Write a function to find the largest of two numbers and store the result in a variable using pass by reference*/

#include <stdio.h>

int fun(int *ptr1, int *ptr2);

int main() 
{
    int num1;
    int num2;

    int *iptr1 = &num1;
    int *iptr2 = &num2;

    printf("Enter the num1 : ");
    scanf("%d",iptr1);

    printf("Enter the num2 : ");
    scanf("%d",iptr2);

    int res = fun(iptr1,iptr2);

    if(res == 1)
    {
        printf("%d is largest\n",*iptr1);
    }
    else
    {
        printf("%d is largest\n",*iptr2);
    }

    return 0;
}

int fun(int *ptr1, int *ptr2)
{
    if(*ptr1 > *ptr2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}