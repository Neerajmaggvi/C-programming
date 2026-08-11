#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the value for a: ");
    scanf("%d",&a);


    printf("Enter the value for b: ");
    scanf("%d",&b);


    printf("Enter the value for c: ");
    scanf("%d",&c);

    if ((a > b && a < c) || (a < b && a > c))
    {
      printf("The middle value is %d\n",a);
    }
    else if ((b > a && b < c) || (b < a && b > c))
    {
        printf("The middle value is %d\n",b);
    }
    else 
    {
        printf("The middle value is %d\n",c);
    }

    return 0;
    
}