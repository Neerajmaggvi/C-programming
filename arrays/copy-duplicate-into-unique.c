#include <stdio.h>
int main() 
{
    int size;

    printf("Enter the size : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array elements : \n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The array elements are : ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int unique_arr[size];

    unique_arr[0] = arr[0];
    int count = 1;

    for(int i = 1; i < size; i++)
    {
        int flag = 0;
    
        for(int j = 0; j < count; j++)
        {
            if(unique_arr[j] == arr[i])
            {
                flag = 1;
                break;
            }
        }
              if (flag == 0)
            {
                unique_arr[count] = arr[i];
                count++;
            }
        
    }

    printf("The unique array elements are : ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ",unique_arr[i]);
    }
    printf("\n");
    

    return 0;
}