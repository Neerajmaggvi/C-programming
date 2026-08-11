#include <stdio.h>
#include <ctype.h>

int main()
{
    char direction;

    printf("Enter direction: ");
    scanf(" %c", &direction);

    switch(toupper(direction))
    {
        case 'N':
            printf("North\n");
            break;
        case 'S':
            printf("South\n");
            break;
        case 'E':
            printf("East\n");
            break;
        case 'W':
            printf("West\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}