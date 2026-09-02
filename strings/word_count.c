/*Write a C program to count the number of words in a string.*/

#include<stdio.h>

int main()
{
    char str[30];

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    int i = 0;
    int count;
    
    if (str[0] != ' ')
    {
        count = 1;
    }
    else
    {
        count = 0;
    }
    

    while (str[i] != '\0')
    {

        if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
        {
            count++;
        }
        i++;
    }
    
    
    printf("Words =====> %d\n",count);

    return 0;
}