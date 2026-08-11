#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the values: ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        if(i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
            {
            printf("%d ",j);
            }
        printf("\n");
        }

        if (i % 2 == 0)
        {
            char ch = 'A';

            for (int k = 1; k <= i; k++)
            {
                printf("%c ",ch);
                ch++;
            }
            printf("\n");
            
        }
        
    }
    
    return 0;
}