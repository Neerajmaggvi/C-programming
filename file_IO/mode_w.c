#include <stdio.h>
int main() 
{
    FILE *fp = fopen("test.txt", "w");

    fputc('C', fp);
    fputc('o', fp);
    fputc('l', fp);
    fputc('l', fp);
    fputc('m', fp);
    fputc('c', fp);

    fclose(fp);

    return 0;
}