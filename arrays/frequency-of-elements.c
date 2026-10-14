#include <stdio.h>
int main() 
{
    int size;

    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        int flag = 0;

        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
            
        }

        if (flag == 1)
        {
            continue;
        }
        

        for (int  k = 0; k < size; k++)
        {
            if (arr[i] == arr[k])
            {
                count++;
            }
            
        }
        
        printf("%d occurs %d times\n",arr[i],count);
    }
    
    return 0;
}