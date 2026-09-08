#include <stdio.h>
int main() 
{
    char str[20];

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    int count = 1;

    int i = 0;

    while (str[i] == ' ')
    {
        i++;
    }
    if(str[i] == '\0')
    {
        printf("No words present\n");
        return 0;
    }

    while (str[i] != '\0')
    {
        if(str[i] == ' ' && str[i + 1] != ' ')
        {
            count++;
        } 
        i++;  
    }

    printf("The word count for this string is ===> %d\n",count);
    
    
    return 0;
}