#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINES 100
#define MAX_LEN 256
int main() {
    FILE *file = fopen("source.txt", "r");
    if (!file) { printf("Create source.txt.\n"); return 1; }
    char *lines[MAX_LINES];
    char buffer[MAX_LEN];
    int line_count = 0;
    while(line_count < MAX_LINES && fgets(buffer, sizeof(buffer), file)) {
        lines[line_count] = strdup(buffer);
        line_count++;
    }
    fclose(file);
    int n = 5;
    printf("Last %d lines:\n", n);
    int start = (line_count > n) ? (line_count - n) : 0;
    for(int i = start; i < line_count; i++) {
        printf("%s", lines[i]);
        free(lines[i]);
    }
    return 0;
}
