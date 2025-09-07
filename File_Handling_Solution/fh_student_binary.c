#include <stdio.h>
#include <string.h>
typedef struct { int id; char name[50]; float gpa; } Student;
int main() {
    FILE *file;
    Student s_write = {101, "Alice", 3.8};
    Student s_read;
    file = fopen("students.dat", "wb");
    if (!file) { perror("Write error"); return 1; }
    fwrite(&s_write, sizeof(Student), 1, file);
    fclose(file);
    printf("Wrote student record.\n");

    file = fopen("students.dat", "rb");
    if (!file) { perror("Read error"); return 1; }
    fread(&s_read, sizeof(Student), 1, file);
    fclose(file);
    printf("Read record: ID: %d, Name: %s, GPA: %.2f\n", s_read.id, s_read.name, s_read.gpa);
    return 0;
}
