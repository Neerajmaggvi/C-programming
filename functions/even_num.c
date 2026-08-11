#include <stdio.h>

int is_even(int n); // Function declaration

int main() 
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int result = is_even(num); //Function call

    if (result)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Not even\n");
    }
    
    return 0;
}

int is_even(int n) // Function define
{
    if(n % 2 == 0)
    return 1;

    else
    return 0;
}