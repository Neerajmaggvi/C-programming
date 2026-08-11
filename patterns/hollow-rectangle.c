#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the value: ");
    scanf("%d",&num);

    for (int i = 1; i <= num ; i++)
    {
        for (int j = 1; j <= num + 2; j++)
        {
            if (i == 1 || i == num || j == 1 || j == num + 2)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
            printf("\n");
            
        }
        
    }
    
    return 0;
}