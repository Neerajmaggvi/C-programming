#include <stdio.h>
int main() 
{
    int n;

    printf("Enter the value : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++) // Here we can even use n-i but we will get only 6 stars in 1st row and with (n + 1 - i ) we get 7 stars in 1st row
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}