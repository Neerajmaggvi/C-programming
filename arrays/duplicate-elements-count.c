#include <stdio.h>
int main() 
{
    int size;

    printf("Enter size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements: \n");
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }


    int count = 0;

    printf("The duplicate elements are:  ");
    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
            
        }
        
    }
   
    printf("%d ",count);

    return 0;
}