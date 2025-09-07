#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file_ptr = fopen("output.txt", "r");
    if (file_ptr == NULL) {
        printf("Error: Could not open 'output.txt'. Please create it first.\n");
        return 1;
    }
    char buffer[256];
    printf("Contents of 'output.txt':\n---\n");
    while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
        printf("%s", buffer);
    }
    printf("---\n");
    fclose(file_ptr);
    return 0;
}
