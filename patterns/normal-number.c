#include <stdio.h>
int main() 
{
    int n;

    printf("Enter the value n: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) // outer loop if for rows 
    {
        for (int j = 1; j <= n; j++) // inner loop is for printing numbers till n for every row  
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    
    return 0;
}