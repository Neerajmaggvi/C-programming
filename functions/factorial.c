#include <stdio.h>

int factorial_of_num(int n); // function declaration

int main() 
{
    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    int fact = factorial_of_num(num); // function call

    printf("Factorial is : %d\n",fact);

    return 0;
}

int factorial_of_num(int n) // function defination 
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
    
}