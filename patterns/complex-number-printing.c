#include <stdio.h>
int main() 
{
    int n;

    printf("Enter the value: ");
    scanf("%d",&n);

    for(int i = 1; i <= 2 * n + 1; i++)
    {
        printf("%d",i);
    }   
    printf("\n");

    for(int i = 1; i <= n; i++)
    {
        int a = 1;

        for(int j = 1; j <= n - i + 1; j++)
        {
            printf("%d",a);
            a++;
        }
        
        for(int k = 1; k <= 2 * i - 1; k++)
        {
            printf(" ");
            a++;
        }
        
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    
    return 0;
}