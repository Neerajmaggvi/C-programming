#include <stdio.h>
int main() 
{
    FILE *fp = fopen("test.txt", "a");

    fputc(' ', fp);
    fputc('W', fp);
    fputc('O', fp);
    fputc('R', fp);
    fputc('L', fp);
    fputc('D', fp);

    return 0;
}