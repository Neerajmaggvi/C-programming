#include <stdio.h>
int main() 
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d",&a, &b, &c);

    if (a > b)
    {
        if (a < c)
        {
            printf("A is middle\n");
        }
        
    }
    if (a < b)
    {
        if (a > c)
        {
            printf("A is middle\n");
        }
        
    }
    if (b > a)
    {
        if (b < c)
        {
            printf("B is middle\n");
        }
        
    }    
    if (b < a)
    {
        if (b > c)
        {
            printf("B is middle\n");
        }
        
    }
    if (c > a)
    {
        if (c < b)
        {
            printf("C is middle\n");
        }
        
    }
    if (c < a)
    {
        if (c > b)
        {
            printf("C is middle\n");
        }
        
    }
    
    return 0;
}