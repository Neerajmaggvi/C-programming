// Swap two variables.

#include <stdio.h>

int main() {

    int x = 10;
    int y = 20;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("x--> %d\ny--->%d\n",x,y);
    return 0;
}