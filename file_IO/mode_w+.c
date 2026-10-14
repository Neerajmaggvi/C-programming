#include <stdio.h>
int main() 
{
    FILE *fp = fopen("test.txt", "w+");

    fputc('H', fp);
    fputc('E', fp);
    fputc('L', fp);
    fputc('L', fp);
    fputc('O', fp);
    
    rewind(fp);
    
    char ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(ch, stdout);
    }
    

    fclose(fp);
        
    return 0;
}