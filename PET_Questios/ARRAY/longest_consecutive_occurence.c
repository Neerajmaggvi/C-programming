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

    int N;

    printf("Enter the value N : ");
    scanf("%d",&N);

    int count = 0;
    int max = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == N)
        {
            count++;
            if(count > max)
            {
                max = count;
            }
        }
        else
        {
            count = 0;
        }
          
    }
    
    printf("The given number %d is present consecutively for %d times\n",N, max);

    return 0;   
}    