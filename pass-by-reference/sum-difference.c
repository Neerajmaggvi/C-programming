/*Write a function to find the sum and difference of two numbers using pass by reference.*/

#include <stdio.h>

void fun(int *ptr1, int *ptr2, int *sptr, int *dptr);

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

    int sum;
    int difference;

    int *sptr = &sum;
    int *dptr = &difference;

    fun(iptr1, iptr2, sptr, dptr);

    printf("sum = %d\n",*sptr);
    printf("Difference = %d\n",*dptr);

    return 0;
}

void fun(int *ptr1, int *ptr2, int *sptr, int *dptr)
{
    *sptr = *ptr1 + *ptr2;
    *dptr = *ptr1 - *ptr2;
}