#include <stdio.h>

int main()
{
    int n;
    int a = 0, b = 1, c;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("0, 1");

    while (1)
    {
        c = a - b;

        if (c < 0)
        {
            if (c < n)
                break;
        }

        printf(", %d", c);

        a = b;
        b = c;

        /* Stop after the negative term reaches the required limit */
        if (c == n)
            break;
    }

    printf("\n");

    return 0;
}
