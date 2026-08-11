#include <stdio.h>
int main() 
{
    int n1, n2;
    char operator;

    printf("Enter first nummber: ");
    scanf("%d",&n1);

    printf("Enter the operator: ");
    scanf(" %c",&operator);

    printf("Enter second numner: ");
    scanf("%d",&n2);

    switch (operator)
    {
    case '+':
       printf("%d + %d = %d\n",n1, n2, n1 + n2);
        break;
        case '-':
        printf("%d - %d = %d\n",n1, n2, n1 - n2);
        break;
        case '*':
        printf("%d * %d = %d\n",n1, n2, n1 * n2);
        break;
        case '/':
        printf("%d / %d = %d\n",n1, n2, n1 / n2);
        break;
    
    default:
    printf("Enter a valid numbers\n");
    }
    return 0;
}