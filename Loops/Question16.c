/*Find if the number is perfect number or not*/

#include <stdio.h>
int main() 
{
    int num;
    int temp = 0;
    int sum = 0;

    printf("Enter the number: ");
    scanf("%d",&num);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
    {
        printf("Perfect\n");
    }
    else
    {
        printf("Not perfect\n");
    }
      
    return 0;
}