#include <stdio.h>
int main() 
{
    int num = 10;
    int *ptr = &num;

    *ptr = 30;

    printf("%d %d\n",num,*ptr);
    
    return 0;
}