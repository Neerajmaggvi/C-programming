#include <stdio.h>
int main() 
{
    int size;

    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array element: \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int temp;

    temp = arr[0];
    arr[0] = arr[size - 1];
    arr[size - 1] = temp;
    
    printf("Array after swaping elements: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    

    
    
    return 0;
}