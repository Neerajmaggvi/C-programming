#include<stdio.h>

int main()
{
    FILE *fp1 = fopen("test.txt", "r+");
    FILE *fp2 = fopen("copy_test.txt", "w");

    int ch;

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, stdout);
    }

    rewind(fp1);

    int ch1;

    while ((ch1 = fgetc(fp1)) != EOF)
    {
        fputc(ch1, fp2);
    }

    
    return 0;
}