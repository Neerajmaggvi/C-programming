/*Write your own function to find the first occurrence of a character in a string.*/

#include <stdio.h>

char * my_strcat(char *dst, char *src);

int main() 
{
    char dst[20] = "Hello";
    char src[20] = " World";

    char * ptr = my_strcat(dst, src);

    printf("Dst =======> %s\n",ptr);

    return 0;
}

char * my_strcat(char *dst, char *src)
{
    int i = 0;

    while (dst[i] != '\0')
    {
        i++;
    }

    int j = 0;

    while (src[j] != '\0')
    {
        dst[i] = src[j];
        i++;
        j++;
    }

    dst[i] = '\0';
    i = 0;
    
    return &dst[i];
}