#include <stdio.h>
int main() 
{
    int size;

    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    size++;

    int value;

    printf("Enter the value to insert: ");
    scanf("%d",&value);

    int position;

    printf("Enter the index value to change: ");
    scanf("%d",&position);

    for (int  i = size; i < position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;

    printf("After inserting the value: ");
    for (int i = 0; i < size - 1; i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
    
    return 0;
}