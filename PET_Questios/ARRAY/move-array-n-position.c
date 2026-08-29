#include <stdio.h>
int main() 
{
    int size;

    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int count;

    printf("Count ===>");
    scanf("%d",&count);

    for (int i = 1; i <= count; i++)
    {
        int temp = arr[size - 1];

        for (int i = size - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }
    

    printf("Array elements ====> ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}