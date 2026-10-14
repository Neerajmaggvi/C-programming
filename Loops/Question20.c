/*Find if the number is Happy number */

#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num != 1 && num != 4)
    {
        int sum = 0;          // Reset once for this round
        int temp = num;       // Copy the current number

        while (temp != 0)
        {
            int digit = temp % 10;
            sum = sum + (digit * digit);
            temp = temp / 10;
        }

        num = sum;            // The new number becomes the sum
    }

    if (num == 1)
    {
        printf("Happy Number\n");
    }
    else
    {
        printf("Not a Happy Number\n");
    }

    return 0;
}