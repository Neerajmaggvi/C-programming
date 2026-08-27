/*Write a C program to find the largest digit and smallest digit in every element of an integer array.*/

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

    int temp_arr[size];

    // To make a copy of the array 
    for (int i = 0; i < size; i++)
    {
        temp_arr[i] = arr[i];  
    }
    
    //To find the largest and smallest in each element
    for (int i = 0; i < size; i++)
    {
        int temp = temp_arr[i];
        int largest = 0;
        int smallest;

        while(temp_arr[i] != 0)
        {
            int digit = temp_arr[i] % 10;
            if(digit > largest)
            {
                largest = digit;
            }
            temp_arr[i] = temp_arr[i] / 10;
        }
        smallest = largest;

        while(temp != 0)
        {
            int digit = temp % 10;
            if(digit < smallest)
            {
                smallest = digit;
            }
            temp = temp / 10;
        }

        printf("The largest is %d and the smallest is %d in %d index\n",largest,smallest,i);


    }
    
    
    return 0;
}