/*Write a function to increment a number by 10 using pass by reference.*/

#include <stdio.h>

void fun(int *ptr);

int main() 
{
    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    fun(&num);

    printf("The number after incremnet is %d\n",num);

    return 0;
}

void fun(int * ptr)
{
    *ptr = *ptr + 10;
}