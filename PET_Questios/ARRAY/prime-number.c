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

    printf("Array elements ===> ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int flag;
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        flag = 0;

        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
            
        }
        if(flag == 0)
        {
            printf("%d ",arr[i]);
            count++;
        }
        
    }
    printf("\n");

    if(count == 0)
    {
        printf("No prime number in array\n");
    }
    
    return 0;
}