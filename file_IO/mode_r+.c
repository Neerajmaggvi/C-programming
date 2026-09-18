#include <stdio.h>
int main() 
{
    FILE *fp = fopen("test.txt", "r+");

    if (fp == NULL)
    {
        printf("File doesn't exists\n");
        return 0;
    }

    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(ch, stdout);
    }

    fputc('C', fp);
    fputc('H', fp);
    fputc('U', fp);
    fputc('T', fp);
    fputc('Y', fp);
    fputc('A', fp);

    rewind(fp);
    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(ch, stdout);
    }
    
    
    return 0;
}