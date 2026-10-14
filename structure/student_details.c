#include <stdio.h>

struct student
{
    char name[20];
    int age;
    float total_marks;
};

int main() {

    struct student s[2];

    
    for(int i = 0; i < 2; i++)
        {
            printf("Enter the information for %d student\n",i + 1);
            scanf("%s %d %f",s[i].name,&s[i].age,&s[i].total_marks);
        }
    
    for(int i = 0; i < 2; i++)
        {
            printf("Information for student %d student\n",i + 1);
            printf("Name: %s\n",s[i].name);
            printf("Age: %d\n",s[i].age);
            printf("Total_marks: %g\n",s[i].total_marks);
        }
    

    float average = (s[0].total_marks + s[1].total_marks) / 2;

    printf("Average of Total Marks: %g",average);

    return 0;
}