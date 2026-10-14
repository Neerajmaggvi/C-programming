/*Write a C program to reverse a string without using strrev().*/

#include <stdio.h>

void my_strrev(char * str);

int main() 
{
    char str[50];

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    my_strrev(str);

    printf("Reverse string =====> %s\n",str);
}

void my_strrev(char *str)
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    int j = length - 1;

    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;

        j--;
    }
    
}

