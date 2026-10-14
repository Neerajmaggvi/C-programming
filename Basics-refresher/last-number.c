#include<stdio.h>

int main()
{
    int num;
    int last;

    printf("Enter the number:");
    scanf("%d",&num);

    last = num % 10;
    
    printf("The last digit is %d\n",last);

    return 0;

}