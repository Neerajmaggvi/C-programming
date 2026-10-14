#include <stdio.h>
#include <math.h>

int main()
{
    int num, power, power2;

    printf("Enter the number :");
    scanf("%d",&num);

    // power = pow(num, 2);
    power = num * num;
    power2 = num * num * num;

    printf("The result is %d\n",power);
    printf("The result is %d\n",power2);

    return 0;
}