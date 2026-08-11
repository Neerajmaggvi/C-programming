#include <stdio.h>
int main() 
{
    int n;

    printf("Enter the value: "); // This is to take input of rows from user
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) // Outer loop is for rows
    {
        for (int j = 1; j <= i; j++) // Inner loop is for printing required number of stars in a row
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}