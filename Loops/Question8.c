/*Product of Digits*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the num: ");
    scanf("%d",&num);

    int digit;
    int product = 1;

    while (num != 0)
    {
       digit = num % 10;
       product = product * digit;
       num = num / 10;
    }
    printf("Product: %d\n",product);
    
    return 0;
}