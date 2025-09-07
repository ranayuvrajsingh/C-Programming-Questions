#include <stdio.h>
#include <string.h>
int main() {
    FILE *file = fopen("source.txt", "r");
    if(!file) return 1;
    int total_lines=0, blank_lines=0;
    char line[256];
    while(fgets(line, sizeof(line), file)){
        total_lines++;
        if(line[0] == '\n' || (line[0] == '\r' && line[1] == '\n')) blank_lines++;
    }
    fclose(file);
    printf("Total Lines: %d, Blank Lines: %d\n", total_lines, blank_lines);
    return 0;
}
