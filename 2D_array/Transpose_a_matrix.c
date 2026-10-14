/*Question 2: Transpose a matrix
Easy
Concept: Rows become columns

Write a C program to read a matrix and print its transpose.*/

#include<stdio.h>

int main()
{
    int rows, columns;

    printf("Enter rows and colums : ");
    scanf("%d %d",&rows, &columns);

    int arr[rows][columns];

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Normal Matrix : \n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    // Transpose a matrix
    printf("Transpose Matrix : \n");
    for(int i = 0; i < columns; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}