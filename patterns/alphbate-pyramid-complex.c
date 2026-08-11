#include <stdio.h>

int main()
{
    int n;

    printf("Enter the value: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // Spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf("#");
        }

        // Increasing characters
        char ch = 'A';

        for (int k = 1; k <= i; k++)
        {
            printf("%c", ch);
            ch++;
        }

        // Decreasing characters
        for (int l = i - 1; l >= 1; l--)
        {
            printf("%c", 'A' + l - 1);
        }

        printf("\n");
    }

    return 0;
}