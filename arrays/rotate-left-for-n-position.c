#include <stdio.h>
int main() 
{
    int size;

    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array elements: \n");

    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int position;

    printf("Enter the position: ");
    scanf("%d",&position);

    for (int i = 0; i < position; i++)
    {
        int temp = arr[0];

        for (int  j = 0; j < size - 1; j++)
        {
            arr[j] = arr[j + 1];
        }

        arr[size - 1] = temp;
        
    }

    printf("Array after operation: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    
    return 0;
}