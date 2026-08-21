#include <stdio.h>
int main() 
{
    int size;

    printf("Enter the size : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int * ptr1;
    int * ptr2;

    ptr1 = arr;
    ptr2 = &arr[size-1];

    while (ptr1 < ptr2)
    {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }
    

    printf("After reverse : \n");
    for (int i = 0; i < size; i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
    

    return 0;
}