/*QUESTION 4: Read and Print a Name
----------------------------------
Write a C program that:
- Creates a character array of size 30.
- Takes the user's name using fgets().
- Prints the name using puts().

Example:
Enter your name: Neeraj Maggavi
Your name is: Neeraj Maggavi*/

#include <stdio.h>
int main() 
{
    char name[20];

    printf("Enter the name: ");
    fgets(name, sizeof(name),stdin);

    printf("Your name is : ");
    puts(name);

    return 0;
}