/*Check if a Number Contains a Given Digit*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int target;

    printf("Enter the target: ");
    scanf("%d",&target);

    int flag = 0;
    int digit;

    while (num != 0)
    {
       digit = num % 10;
       if (digit == target)
       {
        flag = 1;
        break;
       }
       num = num / 10;
    }

    if(flag == 1)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }
    
    return 0;
}