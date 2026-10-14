/*Find the digital root of number*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int temp = num;

    while(num >= 10)
    {
        int sum = 0;
        temp = num;

        while (temp != 0)
        {
            int digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }

        num = sum;
        
    }

    printf("%d\n",num);


    
    return 0;
}