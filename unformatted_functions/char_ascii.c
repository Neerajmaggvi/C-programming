/*QUESTION 2: Character and ASCII Value
--------------------------------------
Write a C program that:
- Reads one character using getchar().
- Prints the character.
- Prints its ASCII value.*/

#include <stdio.h>
int main() 
{
    printf("Enter the character: ");
    char ch = getchar();

    printf("Character: ");
    putchar(ch);
    printf("\n");

    printf("Ascii: %d\n", ch);
    
    return 0;
}