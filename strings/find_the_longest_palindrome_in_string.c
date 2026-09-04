/*Write a program to find the longest plaindrome in a string*/

#include <stdio.h>
int main() 
{
    char str[50];

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    int z = 0;

    while (str[z] != '\0')
    {
        int i = 0;
        int j = 0;

        while (str[i] != ' ')
        {
            i++;
        }
        
        z++;
    }
    
    return 0;
}