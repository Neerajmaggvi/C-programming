#include <stdio.h>

int remove_duplicate(int *iptr, int size);

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

    int count = remove_duplicate(arr, size);

    printf("After removing the dupicate Array elements ====> ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}

int remove_duplicate(int *iptr, int size)
{
    int count = 1;
    int flag;
    // int duplicate_size = size;

    for (int i = 1; i < size; i++)
    {
        flag = 0;

        for (int j = i - 1; j >= 0; j--)
        {
            if (iptr[i] == iptr[j])
            {
                flag = 1;
                // size--;
                break;
            }
            
        }

        if (flag == 0)
        {
            iptr[count] = iptr[i];
            count++;
        }
        
        
    }

    return count;
    
}