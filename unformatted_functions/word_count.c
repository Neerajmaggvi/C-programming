/*QUESTION 7: Count Characters Without strlen()
------------------------------------------------
Write a C program that:
- Reads a sentence using fgets().
- Counts the number of characters using a loop.
- Do not use strlen().
- Print the total number of characters.

Example:
Enter a sentence: Hello World
Number of characters: 11*/

#include <stdio.h>
int main() 
{
    char ch[20];

    printf("Enter the character: ");
    fgets(ch, sizeof(ch), stdin);

    int i = 0;
    int len = 0;
    while (ch[i] != '\0')
    {
        if(ch[i] == ' ')
        {
            len--;
        }
        len++;
        i++;
    }
    
    printf("The count is: %d\n",len);

    return 0;
}