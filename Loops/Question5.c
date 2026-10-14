/*Write a C program to:

Read an integer n.
Count how many digits it contains.
Print the count.*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter a numer: ");
    scanf("%d",&num);

    int count = 0;

    while (num != 0)
    {
        num = num / 10;
        count++;
    }

    printf("output: %d\n",count);
    
    return 0;
}