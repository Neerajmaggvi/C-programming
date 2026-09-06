#include <stdio.h>
int main() 
{
    char str[20];

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    int found = 1;

    // Logic to find the non repeated charater
    for (int i = 0; i < len; i++)
    {
        found = 1;

        for (int j = i - 1; j >= 0; j--)
        {
            if(str[i] == str[j])
            {
                found = 0;
                break;
            }
        }
        
        for(int k = i + 1; k < len; k++)
        {
            if(str[i] == str[k])
            {
                found = 0;
                break;
            }
        }

        if (found)
        {
            printf("The 1st non repeated char ====> %c\n",str[i]);
            return 0;
        }
        
        
    }
    printf("No non reeating character\n");
    
    
    return 0;
}