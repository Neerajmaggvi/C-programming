#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the value: ");
    scanf("%d",&num);

    char ch = 'A';

    for (int i = 1; i <= num; i++)
    {
        for( int j = 1; j <= num + 1 - i; j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    
    return 0;
}