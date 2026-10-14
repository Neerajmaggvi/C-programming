#include <stdio.h>

int main() {
    
    char str[20];

    printf("Enter the string: ");
    scanf("%[^\n]",str);

   char temp[20];

    int i = 0;
    int j = 0;
    int found = 0;
    while(str[i] != '\0')
        {
            while(str[i]!= ' ' && str[i]!= '\0')
            {
                temp[j] = str[i];
                found = 1;
                i++;
                j++;
            }
            if(found == 1)
            {
                break;
            }
            i++;
        }
    
    int len = 0;

    while(temp[len]!='\0')
        {
            len++;
        }

    printf("You entered %s and length is %d",temp,len);
    return 0;
}