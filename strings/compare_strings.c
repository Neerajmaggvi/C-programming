#include <stdio.h>
int main() 
{
    char str1[10] = "hello";
    char str2[10] = "world";

    int i = 0;

    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0')
        {
            break;
        }
        i++;
    }

    int check = str1[i] - str2[i];

    if (check == 0)
    {
        printf("The string is equal\n");
    }
    else
    {
        printf("The string is not equal\n");
    }
    
    return 0;
}