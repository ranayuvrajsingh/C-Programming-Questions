#include <stdio.h>
int main() {
    FILE *in = fopen("input.txt", "w");
    if(in) { fputs("some text with spaces", in); fclose(in); }
    in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    if (!in || !out) return 1;
    char ch;
    while ((ch = fgetc(in)) != EOF) {
        if (ch != ' ') fputc(ch, out);
    }
    fclose(in); fclose(out);
    printf("Spaces removed.\n");
    return 0;
}
