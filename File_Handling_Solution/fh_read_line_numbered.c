#include <stdio.h>
int main() {
    FILE *file = fopen("source.txt", "r");
    if (file == NULL) { printf("Error: Create 'source.txt'.\n"); return 1; }
    char line[256];
    int line_num = 1;
    while (fgets(line, sizeof(line), file)) {
        printf("%d: %s", line_num++, line);
    }
    fclose(file);
    return 0;
}
