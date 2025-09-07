#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *in = fopen("source.txt", "r");
    FILE *out = fopen("lowercase.txt", "w");
    if (!in || !out) return 1;
    char ch;
    while((ch = fgetc(in)) != EOF) fputc(tolower(ch), out);
    fclose(in); fclose(out);
    printf("Converted to lowercase.\n");
    return 0;
}
