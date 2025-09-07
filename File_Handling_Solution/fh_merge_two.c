#include <stdio.h>
void append_file(FILE *dest, const char *src_name) {
    FILE *src = fopen(src_name, "r");
    if (!src) return;
    char ch;
    while((ch = fgetc(src)) != EOF) fputc(ch, dest);
    fclose(src);
}
int main() {
    FILE *f1 = fopen("file1.txt", "w"); if(f1){fputs("File 1.\n", f1); fclose(f1);}
    FILE *f2 = fopen("file2.txt", "w"); if(f2){fputs("File 2.\n", f2); fclose(f2);}
    FILE *merged = fopen("merged.txt", "w");
    if (!merged) return 1;
    append_file(merged, "file1.txt");
    append_file(merged, "file2.txt");
    fclose(merged);
    printf("Files merged.\n");
    return 0;
}
