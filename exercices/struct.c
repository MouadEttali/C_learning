// #include <stdio.h>
// #include <string.h>

// struct Student
// {
//     char name[12];
//     float gpa;
// };

// int main()
// {
//     // structs can't contain methods

//     struct Student student1 = {"Spongebob", 3.0};
//     struct Student student2 = {"Patrick", 2.5};
//     struct Student student3 = {"Sally", 2.7};
//     struct Student student4 = {"Squidword", 2.0};

//     struct Student students[] = {student1, student2, student3, student4};

//     for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
//     {
//         printf("Student's name is %s\n", students[i].name);
//         printf("Student's gpa is %.2f\n", students[i].gpa);
//         printf("\n");
//     }

//     return 0;
// }

// using typedef

#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[12];
    float gpa;
} Student;

int main()
{
    // structs can't contain methods

    Student student1 = {"Spongebob", 3.0};
    Student student2 = {"Patrick", 2.5};
    Student student3 = {"Sally", 2.7};
    Student student4 = {"Squidword", 2.0};

    Student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("%-12s\t", students[i].name);
        printf("%.2f", students[i].gpa);
        printf("\n");
    }

    return 0;
}