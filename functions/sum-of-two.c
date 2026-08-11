#include <stdio.h>

int sum_of_two(int a,int b)
{
    int sum = a + b;
    return sum;
}
int main() 
{
    int num1,num2;

    printf("Enter num1: ");
    scanf("%d",&num1);

    printf("Enter num2: ");
    scanf("%d",&num2);

    int result = sum_of_two(num1, num2);

    printf("%d\n",result);

    return 0;
}