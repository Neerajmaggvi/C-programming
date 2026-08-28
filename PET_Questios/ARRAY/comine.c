#include <stdio.h>
int main() 
{
    int size;

    printf("Enter the size : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array size : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int abundant_count = 0;
    int deficient_count = 0;
    int perfect_count = 0;
    int prime_count = 0;
    int sum = 0;
    

    for (int  i = 0; i < size; i++)
    {
        int sum = 0;

        for (int j = 1; j < arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                sum = sum + j;
            }
            
                if(sum > arr[i])
                {
                    abundant_count++;
                }

                if (sum < arr[i])
                {
                    deficient_count++;
                }

                if (sum == arr[i])
                {
                    perfect_count++;
                }
        }  
        int flag = 0;

        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
            
        }
        if(flag == 0)
        {
            prime_count++;
        }
        
        
    }

    printf("%d %d %d %d\n",abundant_count,deficient_count,perfect_count,prime_count);
    
    
    return 0;
}