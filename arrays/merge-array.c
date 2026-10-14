#include <stdio.h>
int main() 
{
    int size1;
    int size2;

    printf("Enter the size1: ");
    scanf("%d",&size1);

    printf("Enter the size2: ");
    scanf("%d",&size2);

    int arr1[size1];
    int arr2[size2];

    printf("Enter the elements for array1: \n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter the elements for array2: \n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d",&arr2[i]);
    }

    int size3 = size1 + size2;
    int arr3[size3];

    for (int  i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }
    
    int j = 0;

    for (int i = size1; i < size3; i++)
    {
        arr3[i] = arr2[j];
        j++;
    }

    printf("The array elements after merge are: ");
    for (int i = 0; i < size3; i++)
    {
        printf(" %d",arr3[i]);
    }
    printf("\n");
    

    return 0;
}