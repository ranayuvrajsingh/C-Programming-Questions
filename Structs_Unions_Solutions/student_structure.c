#include <stdio.h>
#include <string.h>
struct Student {
    int roll_number;
    char name[50];
    float marks;
};
int main() {
    struct Student s1;
    s1.roll_number = 101;
    strcpy(s1.name, "John Doe");
    s1.marks = 85.5;

    printf("Student Record:\n");
    printf("Roll Number: %d\n", s1.roll_number);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}
