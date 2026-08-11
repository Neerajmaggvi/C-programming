#include <stdio.h>

int main()
{
    int area, length, breadth;

    printf("Enter the lenght: ");
    scanf("%d",&length);
    
    printf("Enter the breadth: ");
    scanf("%d",&breadth);

    area = length * breadth;

    printf("The area is %d\n",area);

    return 0;
}