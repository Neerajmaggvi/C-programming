/*Write a program to count how many times a given character occurs in a string.*/

#include<stdio.h>

int main()
{
    char str[30];

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    char ch;

    printf("Enter the char : ");
    scanf(" %c",&ch);

    int i = 0;
    int flag = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            flag++;
        }
        i++;
    }
    
    printf("%c occures %d times\n", ch, flag);
    
    return 0;
}