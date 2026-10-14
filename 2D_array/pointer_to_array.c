#include <stdio.h>

void fun(int rows, int cols, int (*ptr)[cols])
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d\t",ptr[i][j]);
        }
        printf("\n");
    }
}


int main() 
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    fun(3,3,arr);

    return 0;
}