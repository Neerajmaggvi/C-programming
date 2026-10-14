#include<stdio.h>

int main()
{
int num1 =50;
int num2 =60;

int temp;

temp = num1;
num1 = num2;
num2 = temp;

printf("After swap : %d %d\n",num1,num2);

return 0;
}
