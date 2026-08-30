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

    printf("Array elements ====> ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int j = 1;

    for (int i = 1; i < size; i++)
    {
        if(arr[i] != arr[i - 1])
        {
            arr[j] = arr[i];
            j++;
        }
    }

    printf("Array after operation =====>");
    for (int i = 0; i < j; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    
    return 0;
}