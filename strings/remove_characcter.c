#include <stdio.h>
int main() 
{
    char str[10];

    printf("Enter the string : ");
    scanf("%s",str);

    char ch;

    printf("Enter the character : ");
    scanf(" %c",&ch);

    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    for (int i = 0; i < len; )
    {
        int found = 0;

        if(str[i] == ch)
        {
            found = 1;
        }

        if(found)
        {
            for(int j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            len--;
        }
        else
        {
            i++;
        }
    }

    printf("After removal ===> %s\n",str);
    
    
    return 0;
}