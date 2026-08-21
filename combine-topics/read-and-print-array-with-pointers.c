#include <stdio.h>
int main() 
{
    int size = 5;

    int arr[size];

    int* ptr = arr;

    for (int i = 0; i < size; i++)
    {
        scanf("%d",ptr);
        ptr++;
    }

    ptr =arr;
    
    printf("The array elements are : ");
    for (int i = 0; i < size; i++)
    {
        printf(" %d",*ptr);
        ptr++;
    }
    printf("\n");


    return 0;
}