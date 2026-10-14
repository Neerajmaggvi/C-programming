/*Write a C program to count the number of vowels in a string.*/

#include <stdio.h>
int main() 
{
    char str[20];

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    int i = 0;
    int j = 0;

    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            j++;
        }
        i++;
        
    }

    printf("count of vowels is ======> %d\n",j);
    
    return 0;
}