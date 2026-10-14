#include <stdio.h>
int main() 
{
    int size;

    printf("Enter the size : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array elements : ");
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

    int flag = 0;

    for (int i = 1; i < size; i++)
    {
        if (flag == 1)
        {
            break;
        }
        
        for (int j = i - 1; j >= 0; j--)
        {
            if(arr[i] == arr[j])
            {
                printf("First occurence index value is : %d\n",j);
                flag = 1;
                break;
            }
        }
        
    }

    if (flag == 0)
    {
        printf("No duplicate found\n");
    }
    

    printf("\n");

    return 0;
    
}