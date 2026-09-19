#include <stdio.h>

int main() {

    char str[20];
    
    printf("Enter a numeric string : ");
    scanf("%s", str);

    int i = 0;
    int sum = 0;
    int flag = 1;

    while(str[i] != '\0')
        {
            if(str[0] >= '0' && str[0] <= '9')
            {
                int Valid = 1;
            }
            else
            {
                printf("String to integer is %d\n",0);
                return 0;   
            }
            
            if((str[0] == '-' || str[0] == '+') && (str[1] == '-' || str[1] == '+'))
            {
                printf("String to integer is %d\n",0);
                return 0;
            }
            if(str[i] == '+' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
            {
                i++;
                flag = 1;
            }
            if(str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
            {
                i++;
                flag = -1;
            }
            
            if(str[i] >= '0' && str[i] <= '9')
            {
                int res = str[i] - 48;
                sum = sum * 10 + res;
            }
            i++;
        }
    sum = sum * flag;

    printf("%d",sum);

    return 0;
}