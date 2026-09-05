/*Task: Find the most frequently occurring character in a string.*/

#include <stdio.h>
int main() 
{
    char str[20];

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    int i = 0;
    int longestCount = 0;
    int repeatedIndex;

    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    while (str[i] != '\0')
    {
        int start = i;
        int count = 1;

        for (int j = i + 1; j < length; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }

        if (longestCount < count)
        {
            longestCount = count;
            repeatedIndex = start;
        }
        i++;
    }
    
    printf("Repeated character is %c\n",str[repeatedIndex]);
    printf("Repeated for %d times\n",longestCount);

    return 0;
}