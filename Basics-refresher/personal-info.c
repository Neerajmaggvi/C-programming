/*This code is to display personal info of student*/

#include<stdio.h>

int main()
{
    char name[10];
    int age;
    float CGPA;

    printf("Enter your name :");
    scanf(" %s",name);
    printf("Enter your age :");
    scanf("%d",&age);
    printf("Enter your CGPA :");
    scanf("%f",&CGPA);

    printf("\tSTUDENT DETAIL\t\n");
    printf("NAME :%s\n",name);
    printf("AGE :%d\n",age);
    printf("CGPA :%f\n",CGPA);

    return 0;
}