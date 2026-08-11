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
    
    int position;

    printf("Enter the position: ");
    scanf("%d",&position);

    // shift the elements to left 

    for (int i = position; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("After deleting the element the array elements are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    

    
    return 0;
}