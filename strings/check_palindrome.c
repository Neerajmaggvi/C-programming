/*Write a C program to check whether a string is a palindrome*/

#include <stdio.h>

void my_strrev(char *str);
int strcmp(const char * str, const char *temp);

int main() 
{
    char str[20];

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    char temp[20];

    int i = 0;

    while(str[i] != '\0')
    {
        temp[i] = str[i];
        i++;
    }
    temp [i]= '\0';

    my_strrev(temp);

    int result = strcmp(str, temp);

    if(result == 0)
    {
        printf("Its a palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }
    
    return 0;
    
}

void my_strrev(char *str)
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    int j = length - 1;

    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        j--;
    }
        
}

int strcmp(const char * str, const char *temp)
{
    int i = 0;

    while( str[i] != '\0' && temp[i] != '\0')
    {
        if(str[i] != temp[i])
        {
            return str[i] - temp[i];
        }
        i++;
    }

    if (str[i] == temp[i])
    {
        return 0;
    }
    else
    {
        return str[i] - temp[i];
    }
}