#include <stdio.h>

void print_pattern(int n)
{
    if(n == 0)
        return;

    print_pattern(n - 1);

    printf("%d ", n);

    if(n == 3)
        printf("%d ", n);
}

int main()
{
    int n;

    printf("Enter the character : ");
    scanf("%d", &n);

    print_pattern(n);

    return 0;
}
