/*Write a C program to count the number of consonants in a string.*/

#include <stdio.h>
int main() 
{
    char str[20];

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    int i = 0;
    int count_vowel_space = 0;
    int consonants = 0;

    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] ==  'e' || str[i] ==  'i' || str[i] == 'o' || str[i] ==  'u' || str[i] == ' ')
        {
            count_vowel_space++;
        }
        else
        {
            consonants++;
        }
        i++;
        
    }

    printf("Consonants ======> %d\n",consonants);
    
    return 0;
}