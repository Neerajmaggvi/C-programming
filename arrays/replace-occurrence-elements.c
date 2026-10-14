#include <stdio.h>
int main() 
{
    int size;

    printf("Enter the value: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array elements: \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Before replacing the array elements: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int find_int;

    printf("Enter the element to find: ");
    scanf("%d",&find_int);

    int replace_int;

    printf("Enter the new element to replace: ");
    scanf("%d",&replace_int);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == find_int)
        {
            arr[i] = replace_int;
        }
        
    }
    
    printf("The array after replacement: ");

    for(int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}