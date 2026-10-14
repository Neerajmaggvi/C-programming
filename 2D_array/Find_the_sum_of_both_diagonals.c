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

    int sum1 = 0;
    for(int i = 0; i < rows; i++)
    {
        sum1 = sum1 + arr[i][i];
    }

    int sum2 = 0;
    int j = columns - 1;
    for(int i = 0; i < rows; i++)
    {
        sum2 = sum2 + arr[i][j];
        j--;
    }

    printf("\nPrimary diagonal sum is: %d\n",sum1);
    printf("Secondary diagonal sum is: %d\n",sum2);

    return 0;
}