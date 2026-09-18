#include <stdio.h>
int main() 
{
    FILE *fp = fopen("test.txt","r");

    if(NULL == fp)
    {
        printf("File doesn't exists\n");
        return 0;
    }

    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(ch, stdout);
    }
    
    fclose(fp);

    return 0;
}