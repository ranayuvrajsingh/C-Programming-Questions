#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file_ptr = fopen("log.txt", "a");
    if (file_ptr == NULL) {
        perror("Error opening file");
        return 1;
    }
    fprintf(file_ptr, "This is an appended line.\n");
    fclose(file_ptr);
    printf("Data successfully appended to 'log.txt'.\n");
    return 0;
}
