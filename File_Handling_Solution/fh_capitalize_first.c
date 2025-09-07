#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *in = fopen("source.txt", "r");
    FILE *out = fopen("capitalized.txt", "w");
    if(!in || !out) return 1;
    int capitalize = 1;
    char ch;
    while((ch = fgetc(in)) != EOF){
        if(isspace(ch)) capitalize = 1;
        else if(capitalize){
            ch = toupper(ch);
            capitalize = 0;
        }
        fputc(ch, out);
    }
    fclose(in); fclose(out);
    printf("First letter of each word capitalized.\n");
    return 0;
}
