#include <stdio.h>
int main() 
{
    char str[20];

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
    
    int i = 0;
    int firstIndex = -1;
    int lastIndex;

    while (str[i] != '\0')
    {
        if(str[i] == ch)
        {
            firstIndex = i;
            break;
        }
        i++;
    }

    while (len != 0)
    {
        if(str[len - 1] == ch)
        {
            lastIndex = len - 1;
            break;
        }
        len--;
    }
    
    if (firstIndex = -1)
    {
        printf("The character is not present in the string\n");
    }
    else if(firstIndex == lastIndex)
    {
        printf("The character is unique in the string\n");
    }    
    else
    {
        printf("The first index value is ===> %d\n The last index value is ====> %d\n",firstIndex,lastIndex);
    }
    
    return 0;
}