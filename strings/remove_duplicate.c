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

    for(int i = 1; i < len; )
    {
        int isduplicate = 0;

        for(int j = i - 1; j >= 0; j--)
        {
            if(str[i] == str[j])
            {
                isduplicate = 1;
                break;
            }
        }

        if(isduplicate)
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
    
    printf("After removing duplicate ======>%s\n",str);

    return 0;
}