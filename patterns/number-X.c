#include <stdio.h>

int main() 
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    int a = 1;
    int b = num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (i == j)
            {
                printf("%d", a);
                a++;

                if (i + j == num + 1)
                {
                    continue;
                }
            }

            if (i != j)
            {
                printf(" ");
            }

            if (i + j == num + 1)
            {
                printf("%d", b);
                b--;
            }

            if (i + j != num + 1)
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}