/*Write a function to reverse an array.*/

#include <stdio.h>

void reverse_array(int *iptr, int size);

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

    printf("Array elements ====> ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    reverse_array(arr,size);

    printf("Array elements after reverse ====> ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}

void reverse_array(int *iptr, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = iptr[i];
        iptr[i] = iptr[size - 1 - i];
        iptr[size - 1 - i] = temp;
    }
}