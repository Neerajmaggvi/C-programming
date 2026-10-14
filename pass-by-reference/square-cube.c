/*Write a function to find the square and cube of a number using pass by reference.*/

#include <stdio.h>

void square_cube(int num,int *ptr1, int *ptr2);

int main() 
{
    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    int square;
    int cube;

    int *sptr = &square;
    int *cptr = &cube;

    square_cube(num,sptr,cptr);

    printf("square is %d\n",*sptr);
    printf("Cube is %d\n",*cptr);

    return 0;
}

void square_cube(int num,int *ptr1, int *ptr2)
{
    *ptr1 = num * num;
    *ptr2 = *ptr1 * num;
}