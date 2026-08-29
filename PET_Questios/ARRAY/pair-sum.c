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

    int num;

    printf("Enter the num :");
    scanf("%d",&num);

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(arr[i] + arr[j] == num)
            {
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
        
    }

    return 0;
}