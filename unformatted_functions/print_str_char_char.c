/*QUESTION 8: Print a String Character by Character
------------------------------------------------
Write a C program that:
- Reads a string using fgets().
- Prints each character on a separate line using putchar().

Example:
Enter a string: Neeraj

Output:
N
e
e
r
a
j*/

#include <stdio.h>
int main() 
{
    char ch[20];

    printf("Enter the string: ");
    fgets(ch, sizeof(ch), stdin);

    int i = 0;
    printf("Output: \n");
    while (ch[i] != '\0')
    {
        putchar(ch[i]);
        printf("\n");
        i++;
    }
    
    return 0;
}