#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file_ptr = fopen("output.txt", "w");
    if (file_ptr == NULL) {
        perror("Error opening file");
        return 1;
    }
    fputs("Hello, this is a test file.\nWelcome to file handling in C.\n", file_ptr);
    fclose(file_ptr);
    printf("Text successfully stored in 'output.txt'.\n");
    return 0;
}
