#include<stdio.h>

int main()
{
    int rows, columns;

    printf("Enter the rows and columns : ");
    scanf("%d %d",&rows, &columns);

    int arr[rows][columns];

    printf("Enter the array elements : \n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Enter the array elements are : \n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    int boundary_sum = 0;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(i == 0 || i == rows - 1 || j == 0 || j == columns - 1)
            {
                boundary_sum = boundary_sum + arr[i][j];
            }
        }
    }

    printf("The sum of boundary elements is: %d\n",boundary_sum);

    return 0;
}