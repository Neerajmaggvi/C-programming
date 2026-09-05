/*Write a program to find the longest plaindrome in a string*/

#include <stdio.h>
int main() 
{
    char str[50];

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    int i = 0;
    int count;
    int ispalindrome;
    int longestCount = 0;
    int longestStart = 0;

    while (str[i] != '\0')
    {
        while (str[i] == ' ')
        {
            i++;
        }

        if(str[i] == '\0')
        {
            break;
        }

        count = 0;
        int startIndex = i;

        while (str[i] != ' ' && str[i] != '\0')
        {
            i++;
            count++;
        }

        int endIndex = i - 1;

        int leftIndex = startIndex;
        int rightIndex = endIndex;
        ispalindrome = 1;

        while (leftIndex < rightIndex)
        {
            if (str[leftIndex] != str[rightIndex])
            {
                ispalindrome = 0;
                break;
            }
            leftIndex++;
            rightIndex--;
            
        }

        if (ispalindrome)
        {
            if (longestCount < count)
            {
                longestCount = count;
                longestStart = startIndex;
            }
            
        }
        
    }

    printf("Longest palindrome : ");
    for (int i = longestStart; i < longestStart + longestCount; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");

    printf("Longest palindrome count : %d\n", longestCount);

    
    return 0;
}