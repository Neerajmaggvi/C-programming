// Print the row reverse.

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

    printf("Printing the row reverse: \n");
    for(int i = 0; i < row; i++)
        {
            for(int j = column - 1 ; j >= 0; j--)
                {
                    printf("%d\t",arr[i][j]);
                }
            printf("\n");
        }

    return 0;
}