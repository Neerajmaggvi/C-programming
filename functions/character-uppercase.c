#include <stdio.h>

int is_upper(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return 1;
    }

    else
    {
        return 0;
    }
    
}

int main() 
{
    char ch;

    printf("Enter the character: ");
    scanf("%c",&ch);

    int result = is_upper(ch);

    printf("%d\n",result);

    return 0;
}