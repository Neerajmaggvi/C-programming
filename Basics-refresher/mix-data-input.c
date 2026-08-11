#include<stdio.h>

int main()
{
    int a;
    char b;
    float c;

    printf("Enter the values :\n");
    scanf("%d %c %f",&a,&b,&c);

    printf("%d %c %.2f\n",a,b,c);

    return 0;
}