#include <stdio.h>

void to_swap(int *num1, int *num2);

int main() 
{
    int num1;
    int num2;

    printf("Enter num1: ");
    scanf("%d",&num1);

    printf("Enter num2: ");
    scanf("%d",&num2);

    to_swap(&num1, &num2);

    printf("After swap : %d %d\n",num1, num2);

    return 0;
}

void to_swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}
