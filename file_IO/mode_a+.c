#include <stdio.h>
int main() 
{
    FILE *fp = fopen("test.txt", "a+");

    fputc(' ', fp);
    fputc('Y', fp);
    fputc('E', fp);
    fputc('S', fp);

    char ch;
    rewind(fp);
    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(ch, stdout);
    }
    

    return 0;
}