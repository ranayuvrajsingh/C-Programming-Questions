#include <stdio.h>
#include <string.h>
typedef struct { int roll; char name[20]; } Student;
int main() {
    FILE *file = fopen("student_rec.dat", "wb");
    if(!file) return 1;
    Student s = {1, "David"};
    fwrite(&s, sizeof(Student), 1, file);
    fclose(file);
    printf("Student record written.\n");
    return 0;
}
