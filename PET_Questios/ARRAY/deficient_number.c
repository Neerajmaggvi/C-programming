/*Write a C program to check whether a given number is a Deficient Number.*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the number :");
    scanf("%d",&num);

    int sum = 0;

    for (int i = 1; i < num ; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }  
    }

    if(sum < num)
    {
        printf("It is a deficient number\n");
    }
    else
    {
        printf("It is not a deficient number\n");  
    }
    
    return 0;
}