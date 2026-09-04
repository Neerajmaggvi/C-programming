#include <stdio.h>
int main() 
{
    char str[20];

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    int i = 0;
    int count = 0;
    int start;
    int longestcount = 0;
    int longeststart = 0;

        while (str[i] != '\0')
        {
            if (str[i] == ' ')
            {
                i++;
            }

            if(str[i] == '\0')
            {
                break;
            }

            start = i;
            count = 0;

            while (str[i] != ' ' && str[i] != '\0')
            {
                i++;
                count++;
            }

            if(longestcount < count)
            {
                longestcount = count;
                longeststart = start;
            }
        }

        printf("Longest word : ");
        for (int i = longeststart; i < longeststart + longestcount; i++)
        {
            printf("%c",str[i]);
        }
        
        printf("\n");

        printf("Longest word count : %d\n",longestcount);
        

    return 0;
}