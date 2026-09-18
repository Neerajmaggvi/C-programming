/*QUESTION 1: Read and Print a Character
---------------------------------------
Write a C program that:
- Asks the user to enter one character.
- Reads the character using getchar().
- Prints the character using putchar().

Example:
Enter a character: A
You entered: A*/

#include <stdio.h>
int main() 
{
    char ch;

    printf("Enter the character: ");
    ch = getchar();

    putchar(ch);

    return 0;
}