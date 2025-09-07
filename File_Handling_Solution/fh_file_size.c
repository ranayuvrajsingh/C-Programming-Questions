#include <stdio.h>
int main() {
    FILE *file = fopen("source.txt", "r");
    if (!file) { printf("Create source.txt first.\n"); return 1; }
    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    fclose(file);
    if (size == -1) { perror("Error"); }
    else { printf("Size of source.txt is %ld bytes.\n", size); }
    return 0;
}
