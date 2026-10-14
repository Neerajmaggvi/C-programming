#include <stdio.h>
int main() 
{
    char str[20];

    printf("Enter the string : ");
    scanf("%s",str);

    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }
    

    int i = 1;

    while (str[i] != '\0')
    {
        int flag = 0;

        if (str[i] == str[i - 1])
        {
            flag = 1;   
        }

        if (flag == 1)
        {
            for (int j = i; j < len; j++)
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
    
    printf("The string is ====> %s\n",str);
    
    return 0;
}