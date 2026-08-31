/*Write a C program to find and print the unique common elements between two arrays.*/

#include <stdio.h>
int main() 
{
    int size1;

    printf("Enter the size: ");
    scanf("%d",&size1);

    int size2;

    printf("Enter the size: ");
    scanf("%d",&size2);

    int arr1[size1];

    printf("Enter the elements of array 1: \n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d",&arr1[i]);
    }


    int arr2[size2];

    printf("Enter the elements of array 2 : \n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d",&arr2[i]);
    }

    printf("Array elements of array 1 ====> ");
    for (int i = 0; i < size1; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");

    printf("Array elements of array 2 ====> ");
    for (int i = 0; i < size2; i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");

    int common[size1];

    int count = 0;

    for (int i = 0; i < size1; i++)
    {
        int found = 0;

        for (int j = 0; j < size2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                found = 1;
                break;
            }
        }

        int duplicate = 0;

        if (found)
        {

            for (int j = 0; j < count; j++)
            {
                if (arr1[i] == common[j])
                {
                    duplicate = 1;
                    break;
                }
            
            }
        }
        
        
        if (!duplicate)
        {
            common[count] = arr1[i];
            count++;
        }       
    }

    printf("common array elements are ====> ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ",common[i]);
    }
    printf("\n");


    return 0;
}