#include <stdio.h>
#include <string.h>
int main() {
    FILE *file = fopen("source.txt", "r");
    if (!file) { printf("Create source.txt first.\n"); return 1; }
    char line[256], *search_term = "file";
    int line_num = 1;
    while(fgets(line, sizeof(line), file)) {
        if (strstr(line, search_term)) {
            printf("Found on line %d: %s", line_num, line);
        }
        line_num++;
    }
    fclose(file);
    return 0;
}
