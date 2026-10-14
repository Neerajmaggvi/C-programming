#include <stdio.h>

int main()
{
    int temp;

    printf("Enter temperature: ");
    scanf("%d",&temp);

    if (temp >= 1 && temp <= 15)
    {
        printf("It's cold\n");
    }
    else if (temp >=16 && temp <=25)
    {
        printf("Normal\n");
    }
    
    return 0;
}