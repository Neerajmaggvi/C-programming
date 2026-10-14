#include <stdio.h>
int main() 
{
    char str[20];

    printf("Enter the string : ");
    scanf("%s",str);

    char replace;

    printf("Enter character to replace:  ");
    scanf(" %c",&replace);

    char ch;

    printf("Enter replacement character: ");
    scanf(" %c",&ch);

    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }
    

    for (int i = 0; i < len; i++)
    {
        if (str[i] == replace)
        {
            str[i] = ch;
        }
    }

    printf("String ===> %s\n",str);

    return 0;
}