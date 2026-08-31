/*Find the second largest using pass by reference in an array*/

#include <stdio.h>

int second_largest(int *iptr, int size);

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

    printf("Array elements ====> ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int result = second_largest(arr,size);

    printf("Second largest ===> %d\n",result);

    return 0;
}

int second_largest(int *iptr, int size)
{
    int largest;
    int second_largest; 

    if(iptr[0] == iptr [1])
    {
        largest = iptr[0];
        second_largest = iptr[2];
    }
    else
    {
        largest = iptr[0];
        second_largest = iptr[1];
    }

    if (largest < second_largest)
    {
        int temp = largest;
        largest = second_largest;
        second_largest = temp;
    }

    for (int i = 2; i < size; i++)
    {
        if (iptr[i] > largest)
        {
            second_largest = largest;
            largest = iptr[i];
        }
        
    }
    
    return second_largest;
}