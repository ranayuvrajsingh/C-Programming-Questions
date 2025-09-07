#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *source_file, *dest_file;
    char ch;
    source_file = fopen("source.txt", "w");
    if(source_file) { fputs("This is the source file.", source_file); fclose(source_file); }

    source_file = fopen("source.txt", "r");
    if (source_file == NULL) {
        perror("Error opening source file");
        return 1;
    }
    dest_file = fopen("destination.txt", "w");
    if (dest_file == NULL) {
        perror("Error creating destination file");
        fclose(source_file);
        return 1;
    }
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, dest_file);
    }
    printf("File copied successfully.\n");
    fclose(source_file);
    fclose(dest_file);
    return 0;
}
