/* Student Information System */

#include <stdio.h>

int main()
{
    char name[30];
    char usn[20];
    char branch[20];
    int age;
    int day, month, year;
    int physics, mathematics, c_programming;
    int total;
    float average;

    printf("Enter Student Name      : ");
    scanf("%s", name);

    printf("Enter USN               : ");
    scanf("%s", usn);

    printf("Enter Age               : ");
    scanf("%d", &age);

    printf("Enter Branch            : ");
    scanf("%s", branch);

    printf("Enter Date of Birth (DD/MM/YYYY) : ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Enter Physics Marks     : ");
    scanf("%d", &physics);

    printf("Enter Mathematics Marks : ");
    scanf("%d", &mathematics);

    printf("Enter C Programming Marks : ");
    scanf("%d", &c_programming);

    total = physics + mathematics + c_programming;
    average = total / 3.0;

    printf("\n====================================================\n");
    printf("               STUDENT INFORMATION\n");
    printf("====================================================\n");

    printf("%-18s : %s\n", "Name", name);
    printf("%-18s : %s\n", "USN", usn);
    printf("%-18s : %d\n", "Age", age);
    printf("%-18s : %s\n", "Branch", branch);
    printf("%-18s : %02d/%02d/%04d\n", "Date of Birth", day, month, year);

    printf("----------------------------------------------------\n");

    printf("%-18s : %d\n", "Physics", physics);
    printf("%-18s : %d\n", "Mathematics", mathematics);
    printf("%-18s : %d\n", "C Programming", c_programming);

    printf("----------------------------------------------------\n");

    printf("%-18s : %d\n", "Total", total);
    printf("%-18s : %.2f\n", "Average", average);

    printf("====================================================\n");

    return 0;
}