/*Print all even numbers between 1 and N*/
/*Loop through all numbers 1 to N and check divisibility by 2.*/

#include <stdio.h>
int main() 
{
    int num;

    printf("Enter the value: ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        if(i % 2 == 0)
        {
        printf("%d\n",i);
        }
    }
    
    
    return 0;
}