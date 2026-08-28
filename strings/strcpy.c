#include <stdio.h>

char *my_strcpy(char dst[],const char scr[]);

int main() 
{
    char scr[20];
    char dst[20] = "Nothing";

    scanf("%[^\n]",scr);

    char *ptr = my_strcpy(dst, scr);

    printf("dst =======> %s\n",ptr);
    return 0;
}

char *my_strcpy(char dst[],const char scr[])
{
    int i = 0;
    while (scr[i] != '\0')
    {
        dst[i] = scr[i];
        i++;
    }
    dst[i] = '\0';


    return dst;
}