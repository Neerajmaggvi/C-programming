/*Write a function to swap two numbers using pass by reference.*/

#include <stdio.h>

void swap(int *ptr1, int *ptr2); 

int main() 
{
    int num1;
    int num2;
    int *iptr1 = &num1;
    int *iptr2 = &num2;

    printf("Enter num1 : ");
    scanf("%d",&num1);

    printf("Enter num2 : ");
    scanf("%d",&num2);

    swap(iptr1, iptr2);

    printf("After swap the numbers are : %d %d\n",*iptr1,*iptr2);

    return 0;
}

void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}