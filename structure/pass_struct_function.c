#include <stdio.h>

struct student
{
    int id;
    int age;
    char name[20];
};

void display(struct student *ptr);

int main()
{
    struct student s1;

    printf("Enter the id: ");
    scanf("%d",&s1.id);

    printf("Enter the age: ");
    scanf("%d",&s1.age);
    
    printf("Enter the name: ");
    scanf("%s",s1.name);

    display(&s1);
}

void display(struct student *ptr)
{
    printf("Id: %d\n",ptr->id);
    printf("age: %d\n",ptr->age);
    printf("name: %s\n",ptr->name);
}