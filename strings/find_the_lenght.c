/*Write a C program to count the number of characters in a string without using strlen().*/

#include <stdio.h>
int main() 
{
    char str[50];

    printf("Enter a string : ");
    scanf("%[^\n]",str);

    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    printf("Lenght ======> %d\n",i);

    return 0;
}