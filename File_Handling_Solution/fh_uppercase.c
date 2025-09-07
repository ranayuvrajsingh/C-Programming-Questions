#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *in = fopen("source.txt", "r");
    FILE *out = fopen("uppercase.txt", "w");
    if (!in || !out) return 1;
    char ch;
    while((ch = fgetc(in)) != EOF) fputc(toupper(ch), out);
    fclose(in); fclose(out);
    printf("Converted to uppercase.\n");
    return 0;
}
