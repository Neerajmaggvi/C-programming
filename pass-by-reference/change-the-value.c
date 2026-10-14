/*Write a function to change the value of a variable by passing its address to the function.*/

#include <stdio.h>

void fun(int * ptr);

int main() 
{
    int num;
    int *iptr = &num;

    printf("Enter the num : ");
    scanf("%d",iptr);

    fun(iptr);

    printf("After modifing the value : %d\n",*iptr);

    return 0;
}

void fun(int * ptr)
{
    *ptr = 50;
}