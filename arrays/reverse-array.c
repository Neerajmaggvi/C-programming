#include <stdio.h>
int main() 
{
    int size;

    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The array elements are : \n");
    for (int i = 0; i < size; i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");

    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    printf("After reversiing the elements : \n");
    for (int i = 0; i < size; i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
    
    
    return 0;
}