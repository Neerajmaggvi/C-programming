#include <stdio.h>

int is_palindrome(int num); // Funtion Declaration

int main() 
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int result = is_palindrome(num); // Function call

    if(num == result)
    {
        printf("The number is palindrome\n");
    }
    else
    {
        printf("The number is not palindrome\n");
    }

    return 0;
}

int is_palindrome(int num) // Function definition
{
    int rev = 0;

    while(num != 0)
    {
        int digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }

    return rev;
}