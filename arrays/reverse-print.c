#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d array elements:\n", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The reverse array is: ");

    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}