#include <stdio.h>
int main() {
    FILE *file = fopen("source.txt", "r");
    if (!file) { return 1; }
    int count = 0; char ch;
    while((ch = fgetc(file)) != EOF) {
        if (ch == '\n') count++;
    }
    fseek(file, 0, SEEK_END);
    if (ftell(file) > 0) {
        fseek(file, -1, SEEK_END);
        if(fgetc(file) != '\n') count++;
    }
    fclose(file);
    printf("The file has %d lines.\n", count);
    return 0;
}
