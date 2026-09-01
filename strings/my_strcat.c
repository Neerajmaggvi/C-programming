/*Write your own function to concatenate two strings without using strcat()*/

#include <stdio.h>

char *my_strcat(char dst[], const char scr[]);

int main() 
{
    char dst[20] = "Hello";
    char scr[20] = " World";

    char *ptr = my_strcat(dst, scr);

    printf("Scr ====> %s\n",scr);
    printf("Dst =====> %s\n",ptr);

    return 0;
}

char *my_strcat(char dst[], const char scr[])
{
    int i = 0;
    int j = 0;

    while (dst[i] != '\0')
    {
        i++;
    }
    while(scr[j] != '\0')
    {
        dst[i] = scr[j];
        j++;
        i++;
    }
    dst[i] = '\0';

    return dst;
    
}
