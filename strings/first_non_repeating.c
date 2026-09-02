#include<stdio.h>

int main()
{
    char str[30];

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    int length = 0;

    while(str[length] != '\0')
    {
        length++;
    }


    for (int i = 0; i < length; i++)
    {
        int count = 0;

        for (int j = 0; j < length; j++)
        {
            if (i != j && str[i] == str[j])
            {
                count++;
                break;
            }
            
        }

        if (count == 0)
        {
            printf("First non-repeating character ====> %c\n",str[i]);
            return 0;
        }     
    }

    printf("No non repating character\n");
    
    return 0;
}