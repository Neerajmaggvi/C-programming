/*Write a C program to count:

Number of uppercase letters
Number of lowercase letters*/

#include <stdio.h>
int main() 
{
    char str[20];

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    int i = 0;
    int upper_case = 0;
    int lower_case = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            upper_case++;
        }
        else
        {
            lower_case++;
        }
        i++;
        
    }

    printf("Number of uppercase letters ======> %d\n", upper_case);
    printf("Number of lowercase letters ======> %d\n", lower_case);
    
    return 0;
}