// Find the max element from the column.

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

    printf("Array elements are: \n");
    for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < column; j++)
                {
                    printf("%d\t",arr[i][j]);
                }
            printf("\n");
        }

    //logic
    for(int i = 0; i < column; i++)
        {
            int max = 0;
            for(int j = 0; j < row; j++)
                {
                    if(max < arr[j][i])
                    {
                        max = arr[j][i];
                    }
                }
            printf("The max in the column in %d is %d\n",i,max);
        }
    return 0;
}