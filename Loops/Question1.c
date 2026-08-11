/*Write a C program that takes an integer N as input and prints all numbers from 1 to N, each on a new line*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the value: ");
    scanf("%d",&num);

    for (int i = 1; i <= num ; i++)
    {
      printf("%d\n",i);
    }
    
    return 0;
}