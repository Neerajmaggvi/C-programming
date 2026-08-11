#include<stdio.h>

int main()
{
    float num;

    printf("Enter the value :");
    scanf("%f",&num);

    printf("Original :%f\n",num);
    printf("2 digits :%.2f\n",num);
    printf("4 digits :%.4f\n",num);
    printf("8 digits :%.8f\n",num);

    return 0;
    
}