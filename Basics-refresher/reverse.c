#include <stdio.h>
int main() 
{
    int num;
    int rev = 0;

    printf("Enter a 3 digit number: ");
    scanf("%d",&num);

    int digit = num % 10;
    rev = (rev * 10) + digit;
    num = num /10;

    digit = num % 10;
    rev = (rev * 10) + digit;
    num = num /10;

    digit = num % 10;
    rev = (rev * 10) + digit;
    num = num /10;

    printf("Reverse number is: %d\n",rev);

    
    return 0;
}