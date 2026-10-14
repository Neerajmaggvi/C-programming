#include <stdio.h>

int is_prime(int n); // Function declaration

int main() 
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int result = is_prime(num); // Function call

    if(result == 0)
    {
        printf("Its a prime number\n");
    }
    else
    {
        printf("Its not a prime number\n");
    }
    return 0;
}

int is_prime(int n) // Function definition
{
    int flag = 0;

    if (n <= 1)
    {
       return 1;
    }
    

    for (int i = 2; i < n ; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    return flag;
}