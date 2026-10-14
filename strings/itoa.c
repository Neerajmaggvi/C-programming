#include <stdio.h>

int main() {

    int num;

    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input\n");
        return 0;
    }

    char ch[20];
    int i = 0;
    int res = 0;

    if(num < 0)
    {
        num = num * -1;
        ch[0] = '-';
        i++;
    }
    
    while(num != 0)
        {
            int digit = num % 10;
            res = (res * 10) + digit;
            num = num /10;
        }

    while(res != 0)
        {
            int digit = res % 10;
            ch[i] = digit + '0';
            i++;
            res = res / 10;
        }
    ch[i] = '\0';
    
    printf("char: %s\n",ch);

    return 0;
}