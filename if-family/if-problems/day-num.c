#include <stdio.h>

int main()
{
    int num;

    printf("Enter day number: ");
    scanf("%d",&num);

       if(num ==1)
    {
        printf("Sunday!\n");
    }
    else if(num ==2)
    {
        printf("Monday!\n");
    }
    else if(num ==3)
    {
        printf("Tuesday!\n");
    }
    else if(num ==4)
    {
        printf("Wednesday!\n");
    }
    else if(num ==5)
    {
        printf("Thrusday!\n");
    }
    else if(num ==6)
    {
        printf("Friday!\n");
    }
    else if(num ==7)
    {
        printf("saturday!\n");
    }
    else
    {
        printf("Invalid day number!\n");
    }

    return 0;
}