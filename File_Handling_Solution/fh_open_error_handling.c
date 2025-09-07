#include <stdio.h>
int main() {
    FILE *file = fopen("non_existent_file.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    fclose(file);
    return 0;
}
