#include <stdio.h>
int main() {
    const char* filename = "my_data.txt";
    FILE *file = fopen(filename, "r");
    if (file) {
        fclose(file);
        printf("File '%s' exists.\n", filename);
    } else {
        printf("File '%s' does not exist.\n", filename);
    }
    return 0;
}
