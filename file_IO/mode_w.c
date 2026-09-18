#include <stdio.h>
int main() 
{
    FILE *fp = fopen("test.txt", "w");

    fputc('C', fp);
    fputc('H', fp);
    fputc('U', fp);
    fputc('T', fp);
    fputc('Y', fp);
    fputc('A', fp);

    fclose(fp);
        
    return 0;
}