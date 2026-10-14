#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the value: ");
    scanf("%d",&num);

    

    for (int i = 1; i <= num; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= num; j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
        
    }
    
    return 0;
}