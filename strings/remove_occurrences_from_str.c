/*Write a program to remove all occurrences of a given character from a string.*/

#include<stdio.h>

int main()
{
    char str[30];

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    char ch;

    printf("Enter the char : ");
    scanf(" %c",&ch);

    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    int i = 0;
    int count = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            count++;

            for (int j = i; j < length - 1; j++)
            {
                str[j] = str[j + 1];
            }
        }
        else if(str[i] != ch)
        {
            i++;
        }
        
    }
    str[length - count] = '\0';

    printf("String =====> %s\n",str);
    
    return 0;
}