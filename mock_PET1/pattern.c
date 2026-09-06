#include <stdio.h>

void printpattern(int n);

int main() 
{
    int n;

    printf("Enter the n : ");
    scanf("%d",&n);

    printpattern(n);

    return 0;
}

void printpattern(int n)
{
    char ch;

    for (int i = 0; i < n; i++)
    {
        ch = 'A' + i;
        for(int j = 0; j < n - i; j++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
        
    }
    
}