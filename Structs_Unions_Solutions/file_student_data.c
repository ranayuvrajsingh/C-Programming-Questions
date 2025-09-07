#include <stdio.h>
#include <stdlib.h>
struct Student { int id; char name[50]; };
int main() {
    FILE *fp;
    struct Student s_write = {101, "Alice"};
    struct Student s_read;

    // Write structure to a binary file
    fp = fopen("student.dat", "wb");
    if (fp == NULL) return 1;
    fwrite(&s_write, sizeof(struct Student), 1, fp);
    fclose(fp);
    printf("Wrote student ID %d to file.\n", s_write.id);

    // Read structure from the binary file
    fp = fopen("student.dat", "rb");
    if (fp == NULL) return 1;
    fread(&s_read, sizeof(struct Student), 1, fp);
    fclose(fp);
    printf("Read student ID %d, Name '%s' from file.\n", s_read.id, s_read.name);

    return 0;
}
