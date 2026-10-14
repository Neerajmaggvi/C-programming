#include <stdio.h>
int main() 
{
    char str1[20];

    printf("Enter the string1 : ");
    scanf("%s",str1);

    char str2[20];

    printf("Enter the string2 : ");
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
    
    //Logic to compare stirngs 
    for (int i = 0; i < len1; i++)
    {
        int flag = 0;
        int j;

        for(j = 0; j < len2; j++)
        {
            if (str1[i] == str2[j])
            {
                flag = 1;
                break;
            }
            
        }

        if (flag == 1)
        {
            for (int k = j; k < len2; k++)
            {
                str2[k] = str2[k + 1];
            }
            len2--;
        }
        
    }
    
    if (str2[0] ==  '\0')
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    
    return 0;
}