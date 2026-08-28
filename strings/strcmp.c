#include <stdio.h>

int my_strcmp(const char str1[], const char str2[]); 

int main() 
{
    char str1[20];
    char str2[20];

    scanf("%s %s",str1,str2);
    int result = my_strcmp(str1,str2);

    if(result == 0)
    {
        printf("Both are equal\n");
    }
    else if(result > 0)
    {
        printf("Str1 is greater\n");
    }
    else
    {
        printf("Str2 is greater\n");
    }


    return 0;
}

int my_strcmp(const char str1[], const char str2[])
{
    int i = 0;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
        i++;
    }
}
