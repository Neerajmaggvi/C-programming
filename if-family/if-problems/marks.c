/*This problem is to understand if-else if*/

#include<stdio.h>

int main()
{
    int marks;

    printf("Enter the marks :");
    scanf("%d",&marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("A GRADE\n");  
    }
    else if (marks >= 80 && marks <= 89)
    {
        printf("B GRADE\n");  
    }
    else if (marks >= 70 && marks <= 79)
    {
        printf("C GRADE\n");  
    }
    else if (marks >= 60 && marks <= 69)
    {
        printf("D GRADE\n");  
    }
    else
    {
    printf("F\n");
    }
    
    
    return 0;
    
}