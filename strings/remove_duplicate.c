/*Write a program to remove duplicate characters from a string, keeping only the first occurrence.*/

#include<stdio.h>

int main()
{
    char str[30];

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    int length = 0;
    int count = 0;
    
    while (str[length] != '\0')
    {
        length++;
    }

    for (int i = 1; i < length; )
    {
        int duplicate = 0;

        for (int j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                duplicate = 1;
                break;
            }
              
        }

        if (duplicate)
        {
            for (int j = i; j < length; j++)
            {
                str[j] = str[j + 1];
            }
            length--;
            
        }
        else
        {
            i++;
        }
        
    }
    str[length] = '\0';
    
    printf("String ======> %s\n",str);

    return 0;
}