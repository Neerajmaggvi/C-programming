/*Write your own function to find the first occurrence of a character in a string.*/

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
            flag = 1;
            break;
        }
        i++;
    }
    
    if (flag == 1)
    {
        printf("Character found at index ====> %d\n",i);
    }
    
    return 0;
}