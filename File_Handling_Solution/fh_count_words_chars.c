#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *file = fopen("source.txt", "r");
    if(!file) return 1;
    int words=0, chars=0, in_word=0;
    char ch;
    while((ch = fgetc(file)) != EOF) {
        chars++;
        if(isspace(ch)) in_word = 0;
        else if(in_word == 0) { in_word = 1; words++; }
    }
    fclose(file);
    printf("Characters: %d, Words: %d\n", chars, words);
    return 0;
}
