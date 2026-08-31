/*Write a C function to swap three variables cyclically using pass by reference.*/

#include <stdio.h>

void swap_three(int *aptr,int *bptr, int *cptr);

int main() 
{
    int a, b, c;

    printf("Enter a b and c :");
    scanf("%d %d %d",&a, &b, &c);

    swap_three(&a, &b, &c);

    printf("%d %d %d",a, b, c);

    return 0;
}

void swap_three(int *aptr,int *bptr, int *cptr)
{
    int temp = *cptr;
    *cptr = *bptr;
    *bptr = *aptr;
    *aptr = temp;
}