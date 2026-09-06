#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the num : ");
    scanf("%d",&num);

    int largest = 0;
    int second_largest = 0;
    int third_largest = 0;

    while (num != 0)
    {
        int digit = num % 10;
        if (digit > largest)
        {   
            third_largest = second_largest;
            second_largest = largest;
            largest = digit;
        }
        else if(digit > second_largest)
        {
            third_largest = second_largest;
            second_largest = digit;
        }
        else if(digit > third_largest)
        {
            third_largest = digit;
        }
        
        num = num / 10;
        
    }

    printf("Largest ===> %d\n",largest);
    printf("Second Largest ===> %d\n",second_largest);
    printf("Third Largest ===> %d\n",third_largest);

    
    return 0;
}