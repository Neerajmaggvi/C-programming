// Store the binary into string.

#include <stdio.h>

int main() {

    int num = 10;
    int index_count = 0;
    char str[10];
    for(int i = 7; i >= 0; i--)
        {
            int res = (1 << i) & num;

            if(res)
            {
                str[index_count] = '1';
                index_count++;
            }
            else
            {
                str[index_count] = '0';
                index_count++;
            }
            
        }
    str[index_count] = '\0';
    printf("The binary representation: %s\n", str);
    
    return 0;
}