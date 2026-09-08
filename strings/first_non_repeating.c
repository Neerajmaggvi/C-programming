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

    // Logic to find the non repeated charater
    for (int i = 0; i < len; i++)
    {
        int flag = 0;

        for (int j = 0; j < i; j++)
        {
            if(str[i] == str[j])
            {
                flag = 1;
                break;
            }
        }
        
        for(int k = i + 1; k < len; k++)
        {
            if(str[i] == str[k])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("The 1st non repeated char ====> %c\n",str[i]);
            return 0;
        }
        
        
    }
    printf("No non repeating character\n");
    
    
    return 0;
}