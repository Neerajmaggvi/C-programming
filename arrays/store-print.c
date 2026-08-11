#include <stdio.h>
int main() 
{
    int size;

    printf("Enter size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter %d array elements: \n",size);
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The array elements are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    
    return 0;
}