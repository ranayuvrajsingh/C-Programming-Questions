#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *source, *dest;
    unsigned char buffer[512];
    size_t bytes_read;
    source = fopen("students.dat", "rb");
    if (!source) { printf("Run fh_student_binary first.\n"); return 1; }
    dest = fopen("students_copy.dat", "wb");
    if (!dest) { perror("Copy error"); fclose(source); return 1; }
    while ((bytes_read = fread(buffer, 1, sizeof(buffer), source)) > 0) {
        fwrite(buffer, 1, bytes_read, dest);
    }
    printf("Binary file copied.\n");
    fclose(source);
    fclose(dest);
    return 0;
}
