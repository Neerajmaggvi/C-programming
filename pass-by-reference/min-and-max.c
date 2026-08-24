/*Write a function that accepts two numbers and returns both the minimum and
maximum using pass by reference.*/

#include <stdio.h>

void min_max(int num1, int num2, int *mptr,int *Mptr);

int main() 
{
    int num1;
    int num2;

    printf("Enter num1 : ");
    scanf("%d",&num1);

    printf("Enter num2 : ");
    scanf("%d",&num2);

    int min;
    int max;

    int *mptr = &min;
    int *Mptr = &max;

    min_max(num1, num2, mptr, Mptr);

    printf("Min => %d\n",*mptr);
    printf("Max => %d\n",*Mptr);

    return 0;
}

void min_max(int num1, int num2, int *mptr,int *Mptr)
{
    if(num1 > num2)
    {
        *mptr = num2;
        *Mptr = num1;
    }
    else
    {
        *mptr = num1;
        *Mptr = num2; 
    }
}