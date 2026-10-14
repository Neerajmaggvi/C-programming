// Program to extract or check the bit position i.

#include <stdio.h>

int main() {

    int num = 10;

    for(int i = 7; i >= 0; i--)
        {
            int res = (1 << i) & num;

            if(res)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
    return 0;
}