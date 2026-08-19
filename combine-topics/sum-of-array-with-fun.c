#include <stdio.h>

int passing_array_to_fun(int ptr[], int size);

int main() 
{
    int size;

    printf("Enter the array size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int result = passing_array_to_fun(arr,size);

    printf("The sum is : %d\n",result);

    return 0;
}

int passing_array_to_fun(int ptr[],int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + ptr[i];
    }

    return sum;
    
}