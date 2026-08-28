/*CONVERT 1's TO 0 IN AN INTEGER ARRAY
----------------------------------------
Write a C program to convert all occurrences of digit 1 to digit 0
in every element of an integer array.

Example:
Input:
Array = 817 6117 987 7111 616 111

Output:
Array = 807 6007 987 7000 606 000*/


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
        scanf("%d", &arr[i]);
    }

    int temp_arr[size];
    
    // Copy the elements into another array
    for (int i = 0; i < size; i++)
    {
        temp_arr[i] = arr[i];
    }

    int rev = 0;
    int result = 0;

    //Main logic
    for (int i = 0; i < size; i++)
    {
        rev = 0;

        while (temp_arr[i] != 0)
        {
            int digit = temp_arr[i] % 10;
            if(digit == 1)
            {
                digit = 0;
            }
            rev = (rev * 10) + digit;
            temp_arr[i] = temp_arr[i] / 10;
        }

        result = 0;

        while (rev != 0)
        {
            int digit = rev % 10;
            result = (result * 10) + digit;
            rev = rev / 10;

        }

        printf("%d ",result);
        
        
    }
    printf("\n");
        
 
    return 0;
}
