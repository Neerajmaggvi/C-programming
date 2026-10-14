//Count the number of 1's.

#include <stdio.h>

int main() {

    int num = 10;
    int count = 0;

    for(int i = 7; i >= 0; i--)
        {
            int res = (1 << i) & num;

            if(res)
            {
                count++;
            }
        }
    printf("Number of 1's: %d\n",count);
    
    return 0;
}