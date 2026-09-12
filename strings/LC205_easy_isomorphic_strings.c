#include <stdio.h>
int main() 
{
    char str1[20];

    printf("Enter the string1: ");
    scanf("%s",str1);

    char str2[20];

    printf("Enter the string2: ");
    scanf("%s",str2);

    int len1 = 0;
    int len2 = 0;

    while (str1[len1] != '\0')
    {
        len1++;
    }

    while (str2[len2] != '\0')
    {
        len2++;
    }

    if (len1 != len2)
    {
        printf("False\n");
        return 0;
    }

    for(int i = 0; i < len1; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(str1[i] == str1[j])
            {
                if(str2[i] != str2[j])
                {
                    printf("False\n");
                    return 0;
                }
            }

            if(str2[i] == str2[j])
            {
                if(str1[i] != str1[j])
                {
                    printf("False\n");
                    return 0;
                }
            }
            
        }
    }

    printf("True\n");
    
    return 0;
}