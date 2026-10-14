#include <stdio.h>
int main() 
{
    int size;

    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements of array : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array elements of array  ====> ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int flag;
    int temp;

    for(int i = 0; i < size - 1; i++)
    {
        flag = 0;
        temp = arr[i] + 1;

        if(temp != arr[i + 1])
        {
            flag = 1;
            break;   
        }        
    }

    if (flag == 1)
    {
        printf("Missing element is ====> %d\n",temp);
    }
    
    
    return 0;

}