#include <stdio.h>
int main() 
{
    char str[20];

    printf("Enter the string : ");
    scanf("%[^\n]",str);

    char sub[10];

    printf("Enter the substring : ");
    scanf(" %s",sub);

    int len = 0;

    while (sub[len] != '\0')
    {
        len++;
    }

    int i = 0;

    while (str[i] != '\0')
    {
        int count = 0;

        if (str[i] == sub[0])
        {
            int j = i;

            for(int k = 0; k < len; k++)
            {
                if(str[j] == sub[k])
                {
                    count++;
                    j++;
                }
            }
            
        }

        if (count == len)
        {
            printf("Output ===> %d\n",i);
            return 0;
        }
        i++;
        
    }

    printf("Output ==> -1\n");
    
    
    return 0;
}