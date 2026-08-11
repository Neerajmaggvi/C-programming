#include <stdio.h>

int reverse_number(int n); // Function declaration

int main() 
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int result = reverse_number(num); // Function call
    printf("%d\n",result);
    return 0;
}

int reverse_number(int n) // Function definition
{
    int rev = 0;

    while(n != 0)
    {
        int digit = n % 10;
        rev = (rev * 10) + digit;
        n = n / 10;
    }

    return rev;
}