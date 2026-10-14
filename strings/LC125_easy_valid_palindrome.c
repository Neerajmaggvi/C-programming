#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[50];

    printf("Enter the string : ");
    scanf("%[^\n]", str);

    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    int firstIndex = 0;
    int lastIndex = i - 1;

    int ispalindrome = 1;

    while (firstIndex < lastIndex)
    {
        if (!isalnum(str[firstIndex]))
        {
            firstIndex++;
            continue;
        }

        if (!isalnum(str[lastIndex]))
        {
            lastIndex--;
            continue;
        }

        if (tolower(str[firstIndex]) != tolower(str[lastIndex]))
        {
            ispalindrome = 0;
            break;
        }

        firstIndex++;
        lastIndex--;
    }

    if (ispalindrome)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}