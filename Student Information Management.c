// Create a structure STUDENT for storing information (ID, NAME , AGE ,MARKS) and update the structure for 2 students.
#include <stdio.h>

struct Student
{
    int ID;
    char Name[100];
    int age;
    float marks;
};

struct Student student1, student2;

int main()
{
    printf("STUDENT 1\n");
    printf("Enter your name: ");
    scanf("%s", student1.Name);

    printf("Enter your ID: ");
    scanf("%d", &student1.ID);

    printf("Enter your age: ");
    scanf("%d", &student1.age);

    printf("Enter your marks: ");
    scanf("%f", &student1.marks);

    printf("STUDENT 2\n");
    printf("Enter your name: ");
    scanf("%s", student2.Name);

    printf("Enter your ID: ");
    scanf("%d", &student2.ID);

    printf("Enter your age: ");
    scanf("%d", &student2.age);

    printf("Enter your marks: ");
    scanf("%f", &student2.marks);

    // Details of student 1
    printf("\nStudent 1 Details\n");
    printf("Student name: %s\n", student1.Name);
    printf("Student ID: %d\n", student1.ID);
    printf("Student age: %d\n", student1.age);
    printf("Student marks: %f\n", student1.marks);

    // Details of student 2
    printf("\nStudent 2 Details\n");
    printf("Student name: %s\n", student2.Name);
    printf("Student ID: %d\n", student2.ID);
    printf("Student age: %d\n", student2.age);
    printf("Student marks: %f\n", student2.marks);

    return 0;
}