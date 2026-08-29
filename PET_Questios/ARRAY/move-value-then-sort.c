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

    int count = 0;
    int temp_arr[size];

    int mv_value;

    printf("Enter the move value : ");
    scanf("%d",&mv_value);

    for (int i = 0; i < size; i++)
    {
        if(mv_value != arr[i])
        {
            temp_arr[count] = arr[i];
            count++;
        }
    }

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (temp_arr[j] > temp_arr[j+1])
            {
                int temp = temp_arr[j];
                temp_arr[j] = temp_arr[j+1];
                temp_arr[j+1] = temp;
            }         
        }    
    }

    for (int i = 0; i < size; i++)
    {
        if(mv_value == arr[i])
        {
            temp_arr[count] = arr[i];
            count++;
        }
    }
    

    printf("temp =======>");
    for (int i = 0; i < count; i++)
    {
        printf("%d ",temp_arr[i]);
    }
    printf("\n");
    
    
    return 0;
}    