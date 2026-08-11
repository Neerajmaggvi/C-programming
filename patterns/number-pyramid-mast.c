#include <stdio.h>
int main() 
{
    int n;

    printf("Enter the value: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("#");
        }
        
        int a = 1;

        for (int k = 1; k <= i; k++)
        {
            printf("%d",a);
            a++;
        }
        

        for (int l = i - 1; l >= 1; l--)
        {
            printf("%d",l);
        }
        printf("\n");
        
    }
    
    return 0;
}