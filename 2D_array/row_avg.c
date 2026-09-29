// Find the average of the row elements.

#include <stdio.h>

int main() {

    int row, column;

    printf("Enter the row count: ");
    scanf("%d",&row);

    printf("Enter the column count: ");
    scanf("%d",&column);

    int arr[row][column];

    printf("Enter the array elements: \n");
    for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < column; j++)
                {
                    scanf("%d",&arr[i][j]);
                }
        }

    printf("The 2-D array elements are: \n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
            {
                    printf("%d\t",arr[i][j]);
            }
        printf("\n");
    }

    for(int i = 0; i < row; i++)
    {
        int sum = 0;
        int average = 0;
        for(int j = 0; j < column; j++)
        {
            sum = sum + arr[i][j];
        }
        average = sum / column;
        printf("Average of row %d is %d\n",i,average);
    }
    
    return 0;
}