#include <stdio.h>
#include <string.h>
struct Course { char code[10]; char name[50]; };
struct Student { int id; char name[50]; };
struct Enrollment {
    struct Student student;
    struct Course course;
    char semester[20];
};
int main() {
    struct Enrollment e1;
    e1.student.id = 101;
    strcpy(e1.student.name, "Alice");
    strcpy(e1.course.code, "CS101");
    strcpy(e1.course.name, "Intro to C");
    strcpy(e1.semester, "Fall 2024");
    printf("Enrollment Record:\n");
    printf("Student: %s (ID: %d)\n", e1.student.name, e1.student.id);
    printf("Course: %s (%s)\n", e1.course.name, e1.course.code);
    printf("Semester: %s\n", e1.semester);
    return 0;
}
