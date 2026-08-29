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

    int position;

    printf("Enter the position : ");
    scanf("%d",&position);

    int N;

    printf("Enter the value N : ");
    scanf("%d",&N);

    for (int i = 1; i <= N; i++)
    {
        for (int j = position - 1; j < size; j++)
        {
            arr[j] = arr[j+1];
        }
        size--;
    }
    

    printf("Array ====> ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    
    
    return 0;
}